#include "structhead.h"
using namespace std;

node* insert(node *root)
{
    cout<<"Enter the no. of value u want to insert"<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        if(root==NULL)
        {
          node *tmp=new node();
          root=tmp;
          tmp->left=NULL;
          tmp->right=NULL;
          tmp->data=val;
        }
        else
        {
            node *tmp=root,*tmp1;
            while(tmp!=NULL)
            {
                if(tmp->data>val)
                {
                    tmp1=tmp;
                    tmp=tmp->left;
                }
                else if(tmp->data<val)
                {
                    tmp1=tmp;
                    tmp=tmp->right;
                }
                else
                break;
            }

            if(tmp==NULL)
            {
                node *tmp2=new node();
                tmp2->data=val;
                tmp2->left=NULL;
                tmp2->right=NULL;
                if(tmp1->data<val)
                tmp1->right=tmp2;
                if(tmp1->data>val)
                tmp1->left=tmp2;

            }

        }
        
       
    }
    return root;
}