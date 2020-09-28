#include <iostream>
 
using namespace std;
 
int main()
{
    int n,t1=0,t2=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
 
        if(a==1){t1++;}
        else    {t2++;}
    }
 
    int teams;
    if(t1==0){cout<<0;}
    else if(t1==t2){cout<<t1;}
    else if(t1>t2){cout<<(t2+(t1-t2)/3);}
    else{cout<<t1;}
    return 0;
}