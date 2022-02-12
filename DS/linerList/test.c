//
// Created by crazypig on 2021/8/6.
//
#include <stdio.h>
#include "header.h"
#include "SequentialList.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

void test_seq_list(){
    sqList l;
    init_seq(&l);
    printf("%d\n", is_empty_seq(&l));
    insert_seq(&l, 1, 12);
    insert_seq(&l, 2, 14);
    ElemType e, d, s, index;
    index = find_seq(&l,12);
    printf("index is %d\n", index);
    index = find_seq(&l,14);
    printf("index is %d\n", index);
    s = get_elem_seq(&l,1, &e);
    printf("%d, %d\n",s, e);
    delete_seq(&l,1, &d);
    s = get_elem_seq(&l,1, &e);
    printf("%d, %d, %d\n",s, d, e);
    s = get_elem_seq(&l,2, &e);
    printf("%d, %d, %d\n",s, d, e);
}

void test_link_list(){
    linkNode *head = (linkNode *)malloc(sizeof (linkNode));
    linkNode *p1 = (linkNode *)malloc(sizeof (linkNode));
    linkNode *p2 = (linkNode *)malloc(sizeof (linkNode));
    linkNode *p3 = (linkNode *)malloc(sizeof (linkNode));
    linkNode *p4 = (linkNode *)malloc(sizeof (linkNode));
    linkList l = head;
    p1->val = 1;
    p2->val = 2;
    p3->val = 3;
    p4->val = 4;
    l->next = p1; p1->next = p2; p2->next = p3; p3->next = p4;
    insert_link(l,2,7);
    ElemType e;
    delete_link(l,5, &e);
    printf("%d\n", e);
    for (int i = 1; i < 6; ++i) {
        get_elem_link(l, i, &e);
        printf("%d\n", e);
    }
    int length = get_length_link(l);
    printf("length is %d\n", length);
    int index = find_list(l, 7);
    printf("index is %d\n", index);
}

void test_seq_stack(){
    sqStack s;
    int ok = init_seq_stack(&s);
    printf("%d\n", ok);
    push_seq_stack(&s,12);
    push_seq_stack(&s,13);
    ElemType e;
    pop_seq_stack(&s, &e);
    printf("%d\n", e);
    get_top(&s,&e);
    printf("%d\n", e);
    pop_seq_stack(&s, &e);
    printf("%d\n", e);
    ok = pop_seq_stack(&s, &e);
    printf("%d\n", ok);
}

void test_seq_queue(){
    sqQueue q;
    int ok = init_seq_queue(&q);
    printf("%d\n", ok);
    push_seq_queue(&q,12);
    push_seq_queue(&q,13);
    push_seq_queue(&q,14);
    ElemType e;
    delete_seq_queue(&q, &e);
    printf("%d\n", e);
    delete_seq_queue(&q, &e);
    printf("%d\n", e);
    delete_seq_queue(&q, &e);
    printf("%d\n", e);
    push_seq_queue(&q,1);
    push_seq_queue(&q,2);
    delete_seq_queue(&q, &e);
    printf("%d\n", e);
    delete_seq_queue(&q, &e);
    printf("%d\n", e);
}