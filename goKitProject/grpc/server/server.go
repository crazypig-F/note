package server

import (
	"context"
	transport "github.com/go-kit/kit/transport/grpc"
	"goKitProject/book"
	"goKitProject/grpc/endpoint"
	book2 "goKitProject/grpc/if/book"
	"goKitProject/grpc/request"
	"goKitProject/grpc/response"
	"google.golang.org/grpc"
	"net"
)

type BookServer struct {
	bookNameHandler transport.Handler
	bookNumHandler  transport.Handler
}

func (s *BookServer) GetBookName(ctx context.Context, in *book.NameRequest) (*book.NameReply, error) {
	_, rsp, err := s.bookNameHandler.ServeGRPC(ctx, in)
	if err != nil {
		return nil, err
	}
	return rsp.(*book.NameReply), err
}

func (s *BookServer) GetBookNum(ctx context.Context, in *book.NumRequest) (*book.NumReply, error) {
	_, rsp, err := s.bookNumHandler.ServeGRPC(ctx, in)
	if err != nil {
		return nil, err
	}
	return rsp.(*book.NumReply), err
}

func decodeNameRequest(_ context.Context, req interface{}) (interface{}, error) {
	return request.NameRequest{}, nil
}

func decodeNumRequest(_ context.Context, req interface{}) (interface{}, error) {
	r := req.(*book.NumRequest)
	return request.NumRequest{
		Name: r.Name,
	}, nil
}

func encodeNameResponse(_ context.Context, resp interface{}) (interface{}, error) {
	r := resp.(response.NameRes)
	return &book.NameReply{
		Message: r.NameList,
	}, nil
}

func encodeNumResponse(_ context.Context, resp interface{}) (interface{}, error) {
	r := resp.(response.NumRes)
	return &book.NumReply{
		Num: r.Num,
	}, nil
}

func StartGRPCServer(b book2.If){
	//启动grpc服务
	serviceAddress := ":8888"
	ls, _ := net.Listen("tcp", serviceAddress)
	server := grpc.NewServer()
	book.RegisterBookServiceServer(server, &BookServer{
		bookNameHandler: transport.NewServer(endpoint.MakeGetBookNameEndpoint(b), decodeNameRequest, encodeNameResponse),
		bookNumHandler:  transport.NewServer(endpoint.MakeGetBookNumEndpoint(b), decodeNumRequest, encodeNumResponse),
	})
	server.Serve(ls)
}
