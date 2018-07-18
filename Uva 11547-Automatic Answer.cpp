#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n;
    cin>>k;
    while(k--)
    {
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        n/=10;
        cout<<abs(n%10)<<endl;
    }
    return 0;
}
