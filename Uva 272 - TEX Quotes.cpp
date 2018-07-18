#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    int n=1;
    while(scanf("%c",&a)!=EOF)
    {
        if(a=='"')
        {
            if(n==1)
            {
                printf("``");
                n--;
                continue;
            }
            else
            {
               printf("''");
                n++;
                continue;
            }
        }
        printf("%c",a);
    }
    return 0;
}
