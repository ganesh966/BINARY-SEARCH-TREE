#include "structhead.h"
using namespace std;

void left_view(node *root)
{
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    while(qu.front())
    {
        cout<<qu.front()->data<<" ";
        while(qu.front())
        {
            node *tmp=qu.front();
            qu.pop();
            if(tmp->left)
            qu.push(tmp->left);
            if(tmp->right)
            qu.push(tmp->right);

        }
        qu.pop();
        qu.push(NULL);

    }
    cout<<endl;
}

void right_view(node *root)
{
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    node *tmp;
    while(qu.front())
    {
        while(qu.front())
        {
            tmp=qu.front();
            qu.pop();
            if(tmp->left)
            qu.push(tmp->left);
            if(tmp->right)
            qu.push(tmp->right);
        }
        cout<<tmp->data<<" ";
        qu.pop();
        qu.push(NULL);
    }
    cout<<endl;

}