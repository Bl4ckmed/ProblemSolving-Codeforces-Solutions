#include <iostream>
 
using namespace std;
 
int main()
{
    int n,k,j=0;
    cin>>n>>k;
 
    int tab[n];
    for(int i=0;i<n;i++){cin>>tab[i];}
 
    for(int l=0;l<n;l++)
    {if (5-tab[l]>=k){j++;}}
 
 
 
    cout << j/3 << endl;
    return 0;
}
 