#include "structhead.h"
using namespace std;

void verticalordr(node *root)
{
    queue<pair<node*,int> > qu;
    map<int,vector<int> > mp;
    qu.push(make_pair(root,0));
    while(!qu.empty())
    {
        pair<node*,int> tmp=qu.front();
        qu.pop();
        int level=tmp.second;
        node *tmp1=tmp.first;
        mp[level].push_back(tmp1->data);
        if(tmp1->left)
        {
            qu.push(make_pair(tmp1->left,level-1));
        }
        if(tmp1->right)
        {
            qu.push(make_pair(tmp1->right,level+1));
        }
    }

    map<int,vector<int> >::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<"Level: "<<it->first<<":";
        for(int i=0;i<it->second.size();i++)
        {
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
}