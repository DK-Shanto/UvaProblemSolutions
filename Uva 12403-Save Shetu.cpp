#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,k;
    long long sum=0;
    char str[100];
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(strcmp(str,"donate")==0)
        {
            cin>>k;
            sum+=k;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}
