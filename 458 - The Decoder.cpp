#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[10000];
    while(gets(a))
    {
        int l=strlen(a);
        for(int i=0;i<l;i++)
        {
            a[i]=a[i]-7;
        }
        puts(a);
    }
    return 0;
}
