#include <iostream>
 
using namespace std;
 
int main()
{
    int n ;
    cin>>n;
    int s=0,en=0,pr=0;
    for (int i=0;i<n;i++)
    {
        int h;
        cin>>h ;
        en+=pr-h ;
        if(en<0){s+=-en;en=0;}
        pr=h;
 
    }
    cout<<s;;
    return 0;
}