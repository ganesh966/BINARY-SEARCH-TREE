#include "structhead.h"
using namespace std;

node* newnode(int k)
{
    node *tmp=new node();
    tmp->left=NULL;
    tmp->right=NULL;
    tmp->data=k;
    return tmp;
}

node* insert()
{
    node *root=newnode(4);
    root->left=newnode(5);
    root->right=newnode(6);
    root->left->left=newnode(7);
    root->left->right=newnode(8);
    root->right->left=newnode(9);
    root->right->right=newnode(3);
    return root;
}

queue<int> inorder2(node *root)
{
    stack<node*> st;
    queue<int> qu;
    while(1)
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
        if(st.empty())break;
        root=st.top()->right;
        qu.push(st.top()->data);
        st.pop();
    }
    return qu;
}

void bst(node *root,set<int> qu)
{
    stack<node*> st;
    //queue<int> qu;
    set<int>:: iterator it=qu.begin();
    while(1)
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
        if(st.empty())break;
        root=st.top()->right;
        st.top()->data=*it;
        it++;
        st.pop();
    }

}

void traverse(node *root)
{
    if(root)
    {
        traverse(root->left);
        cout<<root->data<<" ";
        traverse(root->right);
    }
}

void binarytoBst()
{
    node *root=insert();
    queue<int> qu=inorder2(root);
    
    set<int> sst;
    while(!qu.empty())
    {
        sst.insert(qu.front());
        qu.pop();
    }
    bst(root,sst);
    traverse(root);
    cout<<endl;
}