#ifndef STRUCTHEAD
#define STRUCTHEAD
#include<bits/stdc++.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

node* insert(node *root);
void preorder(node *root);
void inorder(node *root);
void postorder(node *root);
void descending(node *root);
void bfs(node *root);
int minm(node *root);
int maxm(node *root);
//node* search(node *root,int val);
node* deletenode(node *root,int val);
void verticalordr(node *root);
void topview(node *root);
void bottomview(node *root);
void left_view(node *root);
void right_view(node *root);
void spiral(node *root);
//int sumpredecessor(node *tmp);
//node* search(node *root,int val);
//void bfs1(node *root);
bool pairsum(node *root,int sum);

int maxleft(node *tmp);
int minright(node *tmp);
void sumpredecessor(node *root,int val);
void bfs1(node *root);

void kthmin_max(node *root,int k);
//floor_ceil
int floor(node *root,int k);
int ceil(node *root,int k);

//Balance Bst
//vector<int> inorder1(node *root);
node* Bbst(node *root);
bool sameornot();
void binarytoBst();

#endif
