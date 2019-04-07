#include "structhead.h"
using namespace std;


vector<int> nextsmall(int arr[],int n)
{
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        if(arr[st.top()]>arr[i])
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                arr[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
    }
    if(!st.empty())
    {
        while(!st.empty())
        {
            arr[st.top()]=-1;st.pop();
        }
    }
    
    vector<int> vt;
    for(int i=0;i<n;i++)
    {
        vt.push_back(arr[i]);

    }
    return vt;
}

vector<int> nextgreater(int arr[],int n)
{
    int small[n];
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        if(arr[st.top()]<arr[i])
        {
            while(!st.empty() && arr[st.top()]<arr[i])
            {
                arr[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
    }
    if(!st.empty())
    {
        while(!st.empty())
        {
            arr[st.top()]=-1;st.pop();
        }
    }
    
    vector<int> vt;
    for(int i=0;i<n;i++)
    {
        vt.push_back(arr[i]);

    }
    return vt;
}

bool sameornot()
{
    int n;
    cout<<"Enter the no. of element in sequence"<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Enter first sequence"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>arr2[j];
    }

    vector<int> vt1s=nextsmall(arr1,n);
    vector<int> vt1g=nextgreater(arr1,n);
    vector<int> vt2s=nextsmall(arr2,n);
    vector<int> vt2g=nextgreater(arr2,n);

    for(int i=0;i<n;i++)
    {
        if(vt1s[i]!=vt2s[i] || vt1g[i]!=vt2g[i])
        return false;
    }
    return true;
}
