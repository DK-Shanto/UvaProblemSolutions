#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[15];

int move_count(int d,int b,int c)
{
    int count =0;
    for(int i=0;i<9;i++)
    {
        if(i!=d&&i!=b&&i!=c)
        {
            count+=a[i];
        }
    }
    return count;
}

int main()
{
    int n=9,move[10];
    while(scanf("%d",&a[0])!=EOF)
    {

       for(int i=1;i<n;i++)
            scanf("%d",&a[i]);

       int min=2147483647;

       char combinations [6] [3 + 2] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
       char output_str [3 + 3];

       move[0]=move_count(0,5,7);
       move[1]=move_count(0,4,8);
       move[2]=move_count(2,3,7);
       move[3]=move_count(2,4,6);
       move[4]=move_count(1,3,8);
       move[5]=move_count(1,5,6);

       for(int i=0;i<6;i++)
       {
           if(move[i]<min)
           {
               min=move[i];
               strcpy (output_str, combinations [i]);
           }
       }
      printf("%s %d\n", output_str, min);

    }
    return 0;
}
