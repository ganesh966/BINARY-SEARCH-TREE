#include "structhead.h"
using namespace std;

void topview(node *root)
{
    queue<pair<node*,int> > qu;
    map<int,int> mp;
    qu.push(make_pair(root,0));
    map<int,int>::iterator it;
    while(!qu.empty())
    {
        pair<node*,int> tmp=qu.front();
        qu.pop();
        node *tmp1=tmp.first;
        int level=tmp.second;
        it=mp.find(level);
        if(it==mp.end())
        {
            mp[level]=tmp1->data;
        }

        if(tmp1->left)
        {
            qu.push(make_pair(tmp1->left,level-1));
        }
        if(tmp1->right)
        {
            qu.push(make_pair(tmp1->right,level+1));
        }
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->second<<" ";
    }
cout<<endl;
}


void bottomview(node *root)
{
    queue<pair<node*,int> > qu;
    map<int,int> mp;
    map<int,int>::iterator it;

    qu.push(make_pair(root,0));
    while(!qu.empty())
    {
        pair<node*,int> tmp=qu.front();
        qu.pop();
        node *tmp1=tmp.first;
        int level=tmp.second;
        mp[level]=tmp1->data;

        if(tmp1->left)
        {
            qu.push(make_pair(tmp1->left,level-1));
        }
        if(tmp1->right)
        {
            qu.push(make_pair(tmp1->right,level+1));
        } 
    }

    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->second<<" ";
    }
    cout<<endl;
}