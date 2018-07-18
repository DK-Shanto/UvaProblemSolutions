#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum,ans,a[10000],j=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        j++;
        sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                sum++;
            else
                ans++;
        }
        cout<<"Case "<<j<<": "<<ans-sum<<endl;
    }
    return 0;
}
