//  BinaryTree.h
//  Project10
//
//  Created by Margherita Lacapra on 4/21/15.
//  Copyright (c) 2015 Margherita Lacapra. All rights reserved.

#ifndef __Project10__BinaryTree__
#define __Project10__BinaryTree__

#include <stdio.h>

struct TreeNode
{
    int key;
    TreeNode* parent;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int value)
    {
        key = value;
        parent = NULL;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree
{
    public:
    BinaryTree();
    ~BinaryTree();
    TreeNode* lookup(int value);
    void insert(int data);
    void deleteNode(int value);
    void deleteAll();
    int size();
    int maxDepth();
    int minValue();
    int maxValue();
    void printPostOrder();
    void printPreOrder();
    void printInOrder();
    bool hasPathSum(int sum);
    void mirror();
    void doubleTree();
    bool isBST();
    TreeNode* getRoot() { return root; }
    void prettyPrint();
    void printNodeKeys(TreeNode *root)
    
    private:
    TreeNode* root;
    TreeNode* lookup(TreeNode* node, int value);
    TreeNode* insert(TreeNode* node, int data);
    void deleteNode(TreeNode* node);
    void deleteAll(TreeNode* node);
    int size(TreeNode* node);
    int maxDepth(TreeNode* node);
    int minValue(TreeNode* node);
    int maxValue(TreeNode* node);
    void printPostOrder(TreeNode* node);
    void printPreOrder(TreeNode* node);
    void printInOrder(TreeNode* node);
    bool hasPathSum(TreeNode* node, int sum);
    void mirror(TreeNode* node);
    void doubleTree(TreeNode* node);
    bool isBST(TreeNode* node);
};

#endif /* defined(__Project10__BinaryTree__) */
