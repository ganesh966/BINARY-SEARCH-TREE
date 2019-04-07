#include "structhead.h"
using namespace std;

int minm(node *root)
{
    if(root->left==NULL)
    return root->data;
    else
    {
        return minm(root->left);
    }
}

int maxm(node *root)
{
    if(root->right==NULL)
    {
        return root->data;
    }
    else
    {
        return maxm(root->right);
    }
    
}