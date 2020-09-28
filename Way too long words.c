#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int n;
    scanf(" %d",&n);
 
    char mot[100];
    int i,length ;
    for(i=0;i<n;i++)
        {
          scanf(" %s",mot);
          length=strlen(mot);
          if(length<=10)
            {
                printf("%s\n",mot);
          }else{printf("%c%d%c \n",mot[0],length-2,mot[length-1]);}
 
         }
 
}