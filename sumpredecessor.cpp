#include "structhead.h"
using namespace std;

int suc,pre;
int maxleft(node *tmp)
{
    while(tmp->right)
    {
        tmp=tmp->right;
    }
    return tmp->data;
}

int minright(node *tmp)
{
    while(tmp->left)
    {
        tmp=tmp->left;
    }
    return tmp->data;
}


void sumpredecessor(node *root,int val)
{
    
    if(root->data==val)
    {
        if(root->left)
        pre=maxleft(root->left);
        if(root->right)
        suc=minright(root->right);
    }

    if(root->data>val)
    {
        suc=root->data;
        sumpredecessor(root->left,val);
    }

    if(root->data<val)
    {
        pre=root->data;
        sumpredecessor(root->right,val);
    }
   
}


void bfs1(node *root)
{
    queue<node*> qu;
    qu.push(root);
    
    cout<<"Sum of inorder predecessor and Sucessor of "<<endl;
    while(!qu.empty())
    {
        node *tmp=qu.front();
        qu.pop();
        suc=0;
        pre=0;
        sumpredecessor(root,tmp->data);
        int res=suc + pre;
        cout<<"Node:"<<tmp->data<<"  "<<res<<endl;
        if(tmp->left!=NULL)
        qu.push(tmp->left);
        if(tmp->right!=NULL)
        qu.push(tmp->right);

    }
}