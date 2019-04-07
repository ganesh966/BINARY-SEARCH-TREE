#include "structhead.h"
using namespace std;

vector<int> inorder1(node *root)
{
    vector<int> vt;
    stack<node*> st;
    while(1)
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
        if(st.empty())break;
        root=st.top()->right;
        vt.push_back(st.top()->data);
        st.pop();
    }
    return vt;    
}


node* Balancebst(vector<int> vt,int start,int end)
{
  if(start>end)
  return NULL;
  int mid=(start+end)/2;
  node *root=new node();
  root->left=NULL;
  root->right=NULL;
  root->data=vt[mid];
  root->left=Balancebst(vt,start,mid-1);
  root->right=Balancebst(vt,mid+1,end);
  return root;
}

node* Bbst(node *root)
{
    vector<int> vt=inorder1(root); 
    root=Balancebst(vt,0,vt.size()-1);
    return root;
}