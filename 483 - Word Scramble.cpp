#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int i,k;
   char a[10000],b[10000];
   while(gets(a))
   {
       int j,m;
       j=m=0;
       for(i=0;a[i]!='\0';i++)
       {
           if(a[i]==' ')
           {
               for(k=i-1;k>=m;k--)
               {
                   b[j]=a[k];
                   j++;
               }
              b[j]=' ';
              j++;
              m=j;
           }


       }
       for(k=i-1;k>=m;k--)
       {
           b[j]=a[k];
           j++;
       }
       b[j]='\0';

       puts(b);
   }
}
