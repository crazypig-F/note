//
// Created by crazypig on 2021/8/6.
//

#ifndef DS_QUEUE_H
#define DS_QUEUE_H

#include <stdlib.h>
#include "header.h"

#define MAX_QUEUE_SIZE 100

status init_seq_queue(sqQueue *q) {
    q->base = (ElemType *) malloc(MAX_QUEUE_SIZE * sizeof(ElemType));
    if (!q->base) exit(OVERFLOW);
    q->front = q->rear = 0;
    return OK;
}

int get_length_seq_queue(sqQueue *q){
    return (q->rear - q->front + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

bool is_empty(sqQueue *q){
    return q->front == q->rear;
}

bool is_full(sqQueue *q){
    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

status push_seq_queue(sqQueue *q, ElemType e){
    if (is_full(q)) return ERROR;
    q->base[q->rear] = e;
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    return OK;
}

status delete_seq_queue(sqQueue *q, ElemType *e){
    if (is_empty(q)) return ERROR;
    *e = q->base[q->front];
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return OK;
}
#endif //DS_QUEUE_H
