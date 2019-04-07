#include "structhead.h"
using namespace std;

int floor(node *root,int k)
{
    if(root==NULL)
    return INT_MAX;
    if(root->data==k)
    return k;

    if(k<root->data)
    return floor(root->left,k);

    int fl=floor(root->right,k);
    return (fl<=k)?fl:root->data;
    
}

int ceil(node *root,int k)
{
    if(root==NULL)
    return -1;
    if(root->data==k)
    return k;
    if(root->data<k)
    return ceil(root->right,k);

    int cl=ceil(root->left,k);
    return (cl>=k)?cl:root->data;
}