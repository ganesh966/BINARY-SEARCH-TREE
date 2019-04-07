#include "structhead.h"
using namespace std;

void kthmin_max(node *root,int k)
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

    int size=out.size();
    int kthmin=size-k+1;
    int count=0;
    while(!out.empty())
    {
        count++;
        if(count==k)
        cout<<"k-th max="<<out.top()<<endl;
        if(count==kthmin)
        cout<<"k-th min="<<out.top()<<endl;
        out.pop();
    }

}
