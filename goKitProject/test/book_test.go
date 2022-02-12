package test

import (
	"context"
	"fmt"
	"goKitProject/book"
	"google.golang.org/grpc"
	"testing"
)

func TestGetBookName(t *testing.T) {
	conn, err := grpc.Dial("127.0.0.1:8888", grpc.WithInsecure())
	if err != nil {
		fmt.Println(err)
	}
	defer conn.Close()
	c := book.NewBookServiceClient(conn)
	result, err := c.GetBookName(context.Background(), &book.NameRequest{})
	if err != nil {
		fmt.Println(err)
	}
	fmt.Println(result)
}

func TestGetBookNum(t *testing.T) {
	conn, err := grpc.Dial("127.0.0.1:8888", grpc.WithInsecure())
	if err != nil {
		fmt.Println(err)
	}
	defer conn.Close()
	c := book.NewBookServiceClient(conn)
	result, err := c.GetBookNum(context.Background(), &book.NumRequest{
		Name: "golang 程序设计",
	})
	if err != nil {
		fmt.Println(err)
	}
	fmt.Println(result)
}