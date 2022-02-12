package endpoint

import (
	"context"
	"github.com/go-kit/kit/endpoint"
	"goKitProject/grpc/if/book"
	request2 "goKitProject/grpc/request"
	response2 "goKitProject/grpc/response"
)

func MakeGetBookNameEndpoint(svc book.If)endpoint.Endpoint{
	return func(ctx context.Context, request interface{}) (response interface{}, err error) {
		res := svc.GetBookName()
		return response2.NameRes{
			NameList: res,
		}, nil
	}
}

func MakeGetBookNumEndpoint(svc book.If)endpoint.Endpoint{
	return func(ctx context.Context, request interface{}) (response interface{}, err error) {
		req := request.(request2.NumRequest)
		res := svc.GetNum(req.Name)
		return response2.NumRes{
			Num: res,
		}, nil
	}
}