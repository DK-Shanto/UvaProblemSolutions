#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ar[100][101]={"Happy","birthday","to","you",
    "Happy","birthday","to","you","Happy","birthday",
    "to","Rujia","Happy","birthday","to","you"};
    int t;
    while(cin>>t)
    {
        string str[100];
    for(int i=0;i<t;i++)
        cin>>str[i];
        int i=0,j=0,flag=0;
    while(true)
    {
        cout<<str[i]<<": "<<ar[j]<<endl;
        if(i==t-1)
            flag=1;
        if(j==15&&flag==1)
            break;
        i++;
        j++;
        if(i>=t)
          i=0;
        if(j>15)
            j=0;

    }
    }
    return 0;
}
