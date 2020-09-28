#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n ;
    cin>>n;
    vector <int> v ;
    int l=0,aux=0 ;
    for(int i=0;i<n;i++)
    {
       int a ;
       cin>>a ;
       if (a>=aux){l++;}
       else {v.push_back(l);l=1;}
       aux=a ;
    }
    v.push_back(l);
    int maxi=v[0];
    for(int i=0;i<v.size();i++){if (v[i]>maxi){maxi=v[i];}}
    cout<<maxi;
    return 0;
}