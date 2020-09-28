#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a;
    vector<int> v ;
    int n,m;
    cin>>n>>m;
 
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
 
    }
    int s=0;
 
    for(int i=0;i<n;i++)
 
    {
       s+=v[i];
       cout<<s/m<<" ";
       s=s%m;
    }
 
    return 0;
}