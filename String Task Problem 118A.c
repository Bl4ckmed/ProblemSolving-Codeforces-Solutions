#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char mot[100],nouveaumot[200]="";
    scanf(" %s",mot);
 
    int i,length;
    length=strlen(mot);
 
    for(i=0;i<length;i++)
    { if(mot[i]>=65&&mot[i]<=90)
        {
            mot[i]=97+mot[i]-65;
        }
 
      if((mot[i]!='a')&&((mot[i])!='e')&&((mot[i])!='o')&&((mot[i])!='u')&&((mot[i])!='i')&&((mot[i])!='y'))
     {
         printf(".%c",mot[i]);
     }
 
 
    }
 