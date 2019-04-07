#include "structhead.h"
using namespace std;


bool pairsum(node *root,int sum)
{
    int arr[1000];
    memset(arr,0,sizeof(arr));
    queue<node*> qu;
    qu.push(root);
    arr[root->data]=1;
    while(!qu.empty())
    {
        node *tmp=qu.front();
        qu.pop();
        int rm=sum-(tmp->data);
        if(arr[rm]==1)return true;
        arr[tmp->data]=1; 
    
        if(tmp->left)
        qu.push(tmp->left);
        if(tmp->right)
        qu.push(tmp->right);
    }
    return false;
}