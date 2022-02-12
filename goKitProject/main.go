package main

import (
	"goKitProject/grpc/server"
	"goKitProject/index"
)

func main() {
	b := new(index.Book)
	server.StartGRPCServer(b)
}
