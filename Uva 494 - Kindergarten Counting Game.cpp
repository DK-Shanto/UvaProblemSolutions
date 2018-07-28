#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[10000];
    while(gets(str))
    {
        int sum=0,i=0,flag=0;
        while(str[i]!='\0')
        {
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            {
                flag=1;
            }
            else
            {
                sum+=flag;
                flag=0;
            }
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
