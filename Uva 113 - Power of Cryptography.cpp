#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,p;
    double ans;
    while(cin>>n>>p)
    {
        ans = pow(p,1.0/n);
        cout<<ans<<endl;
    }
    return 0;
}
