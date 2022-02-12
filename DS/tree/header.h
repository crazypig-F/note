//
// Created by crazypig on 2021/8/6.
//

#ifndef DS_HEADER_H
#define DS_HEADER_H
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef int status;
typedef struct BTreeNode {
    ElemType val;
    struct BTreeNode *left;
    struct BTreeNode *right;
} BTreeNode, *BTree;

#endif //DS_HEADER_H
