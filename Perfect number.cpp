#include<bits/stdc++.h>
#include<string>
 
 
using namespace std;
 
int main()
{
 
 
      int k ;
      cin>>k;
 
 
      int h ;
      int j=0,sum;
 
      for(unsigned long long int i=18;i<1000000000000000000000;i++)
      {
        h=i;
        sum=0;
        while(h!=0)
        {
            sum+=h%10;
            h=h/10;
        }
 
        if(sum==10){j++;}
        if (k==j){cout<<i; break; }
 
      }
 
    return 0;
}
