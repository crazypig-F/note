cmake_minimum_required(VERSION 3.19)
project(DS C)

set(CMAKE_C_STANDARD 99)

add_executable(DS linerList/header.h linerList/LinkedList.h linerList/SequentialList.h linerList/test.c linerList/String.h linerList/Stack.h linerList/Queue.h tree/header.h tree/BinaryTree.h tree/test.c)