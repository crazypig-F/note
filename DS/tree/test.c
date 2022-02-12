//
// Created by crazypig on 2021/8/6.
//
#include <stdlib.h>
#include "header.h"
#include "BinaryTree.h"

void test_binary_tree() {
    BTreeNode *n1 = (BTreeNode *) malloc(sizeof(BTreeNode));
    BTreeNode *n2 = (BTreeNode *) malloc(sizeof(BTreeNode));
    BTreeNode *n3 = (BTreeNode *) malloc(sizeof(BTreeNode));
    BTreeNode *n4 = (BTreeNode *) malloc(sizeof(BTreeNode));
    BTreeNode *n5 = (BTreeNode *) malloc(sizeof(BTreeNode));
    n1->val = 1;
    n2->val = 2;
    n3->val = 3;
    n4->val = 4;
    n5->val = 5;
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    preOrderTravers(n1);
    printf("\n");
    inOrderTravers(n1);
    printf("\n");
    postOrderTravers(n1);
    printf("\n");
}
int main(){
    test_binary_tree();
}