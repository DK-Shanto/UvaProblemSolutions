#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    int i,j,count,temp=0;
    while(scanf("%d %d",&i,&j)!= EOF)
    {
        int i2=i;
        int j2=j;
        int max_count=0;
        if(i>j)
        {
            temp=i;
            i=j;
            j=temp;
        }

    while(i<=j)
    {
        n=i;
        count=1;
        while(n!=1)
        {
        if(n%2==1)
            n=(3*n)+1;
        else
            n=n/2;

        count++;
        }

         if(count>max_count)
        max_count=count;


       i++;
    }

    printf("%d %d %d\n",i2,j2,max_count);
    }

    return 0;
}
