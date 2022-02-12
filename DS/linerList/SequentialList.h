//
// Created by crazypig on 2021/8/5.
//

#ifndef DS_SEQUENTIALLIST_H
#define DS_SEQUENTIALLIST_H

#include <stdlib.h>
#include "header.h"

status init_seq(sqList *p) {
    p->data = (ElemType *) malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!p->data) exit(OVERFLOW);  //分配失败
    p->length = 0;
    p->listSize = LIST_INIT_SIZE;
    return OK;
}

void destroy_seq(sqList *p) {
    free(p->data);
    p->data = NULL;
    p->length = 0;
    p->listSize = 0;
}

void clear_seq(sqList *p) {
    p->length = 0;
}

bool is_empty_seq(sqList *p) {
    return p->length == 0;
}

int get_length_seq(sqList *p) {
    return p->length;
}

status get_elem_seq(sqList *p, int index, ElemType *e) {
    if (index < 1 || index > p->length) return ERROR;
    *e = p->data[index-1];
    return OK;
}


status insert_seq(sqList *p, int index, ElemType e) {
    if (index < 1 || index > p->length+1) return ERROR;
    if (p->length >= p->listSize) {
        ElemType *newBase = (ElemType *) realloc(p->data, LIST_INCREMENT * sizeof(ElemType));
        if (!newBase) exit(OVERFLOW);
        p->data = newBase;
        p->listSize += LIST_INCREMENT;
    }
    ElemType *q = &p->data[index-1];
    for (ElemType *i = &(p->data[p->length - 1]); i > q; --i) {
        *(i + 1) = *i;
    }
    *q = e;
    p->length++;
    return OK;
}

status delete_seq(sqList *p, int index, ElemType *e) {
    if (index < 1 || index > p->length) return ERROR;
    *e = p->data[index-1];
    ElemType *q = &p->data[index-1];
    for (ElemType *i = &p->data[p->length - 1]; i > q; --i) {
        *(i - 1) = *i;
    }
    p->length--;
    return OK;
}

int find_seq(sqList *p, ElemType e) {
    int i = 0;
    while (i < p->length && p->data[i] != e) i++;
    if (i < p->length) return i;
    return -1;
}

#endif //DS_SEQUENTIALLIST_H
