//
// Created by crazypig on 2021/8/5.
//

#ifndef DS_HEADER_H
#define DS_HEADER_H
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define LIST_INIT_SIZE  100  //线性表存储空间的初始分配量
#define LIST_INCREMENT   10  //线性表存储空间的分配增量
typedef int bool;
typedef int status;
typedef int ElemType;

typedef struct {
    ElemType *data;
    int length;
    int listSize;
} sqList;

typedef struct linkNode{
    ElemType val;
    struct linkNode *next;
} linkNode, *linkList;

typedef struct {
    ElemType *base;
    ElemType *top;
    int size;
}sqStack;

typedef struct {
    ElemType *base;
    int front;
    int rear;
}sqQueue;

#endif //DS_HEADER_H
