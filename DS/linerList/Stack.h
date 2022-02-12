//
// Created by crazypig on 2021/8/6.
//

#ifndef DS_STACK_H
#define DS_STACK_H

#include <stdlib.h>
#include "header.h"

status init_seq_stack(sqStack *s) {
    s->base = (ElemType *) malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!s->base) exit(OVERFLOW);
    s->top = s->base;
    s->size = 0;
    return OK;
}

status get_top(sqStack *s, ElemType *e){
    if (s->top == s->base) return ERROR;
    *e = *(s->top - 1);
    return OK;
}

status pop_seq_stack(sqStack *s, ElemType *e){
    if (s->top == s->base) return ERROR;
    *e = *(--s->top);
    return OK;
}

status push_seq_stack(sqStack *s, ElemType e){
    if (s->top - s->base >= s->size){
        s->base = (ElemType*) realloc(s->base, LIST_INCREMENT * sizeof (ElemType));
        if (!s->base) exit(OVERFLOW);
        s->top = s->base + s->size;
        s->size += LIST_INCREMENT;
    }
    *s->top++ = e;
    return OK;
}


#endif //DS_STACK_H
