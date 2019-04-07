#include "structhead.h"
using namespace std;

//Preorder
void preorder(node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

//Inorder
void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//Postorder
void postorder(node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

//Level order
void bfs(node *root)
{
    queue<node*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        node *tmp=qu.front();
        qu.pop();
        cout<<tmp->data<<" ";
        if(tmp->left!=NULL)
        qu.push(tmp->left);
        if(tmp->right!=NULL)
        qu.push(tmp->right);

    }
}

//Spiral 
void spiral(node *root)
{
    stack<int> st;
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    st.push(root->data);
    int count=1;
    while(qu.front())
    {
        if(count%2!=0)
        {
            while(!st.empty())
            {
                node *tmp=qu.front();
                qu.pop();
                cout<<st.top()<<" ";
                st.pop();
                if(tmp->left)
                qu.push(tmp->left);
                if(tmp->right)
                qu.push(tmp->right);
            }
        }
        else
        {
            while(qu.front())
            {
                node *tmp=qu.front();
                qu.pop();
                cout<<tmp->data<<" ";
                if(tmp->left)
                {
                    qu.push(tmp->left);
                    st.push(tmp->left->data);
                }
                if(tmp->right)
                {
                    qu.push(tmp->right);
                    st.push(tmp->right->data);
                }
            }
        }
        qu.pop();
        qu.push(NULL);
        count++;
        
    }
    cout<<endl;
}


//Descending
void descending(node *root)
{
    stack<node*> st;
    stack<int> out;
    while(1)
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
        if(st.empty())break;
        out.push(st.top()->data);
        root=st.top()->right;
        st.pop();
    }

    while(!out.empty())
    {
        cout<<out.top()<<" ";
        out.pop();
    }
    cout<<endl;  
}