//
// Created by crazypig on 2021/8/5.
//

#ifndef DS_LINKEDLIST_H
#define DS_LINKEDLIST_H

#include "header.h"

// 带头节点的单链表
status get_elem_link(linkList l, int i, ElemType *e) {
    linkNode *p = l->next;
    int j = 1;
    while (p && j < i) {
        p = p->next;
        ++j;
    }
    if (!p || j > i) return ERROR;
    *e = p->val;
    return OK;
}

status insert_link(linkList l, int index, ElemType e) {
    linkNode *p = l;
    int j = 0;
    while (p && j < index - 1) {
        p = p->next;
        j++;
    }
    if (!p || j > index) return ERROR;
    linkNode *s = (linkNode *) malloc(sizeof(linkNode));
    s->val = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

status delete_link(linkList l, int index, ElemType *e){
    linkNode *p = l;
    int j = 0;
    while (p && j < index - 1) {
        p = p->next;
        j++;
    }
    if (!p || j > index) return ERROR;
    linkNode *q = p->next;
    p->next = q->next;
    *e = q->val;
    free(q);
    return OK;
}

int find_list(linkList l, ElemType e){
    int i = 0;
    linkNode *p = l->next;
    while (p && e != p->val){
        p = p->next;
        i++;
    }
    if (p) return i;
    return -1;
}

int get_length_link(linkList l){
    int i = 0;
    linkNode *p = l->next;
    while (p){
        p = p->next;
        i++;
    }
    return i;
}

#endif //DS_LINKEDLIST_H
