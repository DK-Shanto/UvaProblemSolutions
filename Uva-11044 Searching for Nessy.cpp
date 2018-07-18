#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        n=n/3;
        m=m/3;
        cout<<n*m<<endl;
    }
    return 0;
}
