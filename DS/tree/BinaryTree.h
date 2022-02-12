//
// Created by crazypig on 2021/8/6.
//

#ifndef DS_BINARYTREE_H
#define DS_BINARYTREE_H
#include <stdio.h>
#include "header.h"

void preOrderTravers(BTree root){
    if (!root) return;
    printf("%d", root->val);
    preOrderTravers(root->left);
    preOrderTravers(root->right);
}

void inOrderTravers(BTree root){
    if (!root) return;
    inOrderTravers(root->left);
    printf("%d", root->val);
    inOrderTravers(root->right);
}

void postOrderTravers(BTree root){
    if (!root) return;
    postOrderTravers(root->left);
    postOrderTravers(root->right);
    printf("%d", root->val);
}

#endif //DS_BINARYTREE_H
