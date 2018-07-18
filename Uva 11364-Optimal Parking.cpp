#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a[205],n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        for(int i=0;i<n-1;i++)
        {
            sum+=a[i]-a[i+1];
        }
        sum+=a[0]-a[n-1];
        cout<<sum<<endl;
    }
    return 0;
}
