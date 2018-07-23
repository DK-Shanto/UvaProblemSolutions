#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    double a,b,c,sum=0;
    while(cin>>n)
    {
        while(n--)
        {
            sum=0;
        cin>>m;
        while(m--)
        {
           cin>>a>>b>>c;
           sum+=(a/b)*b*c;
        }
        cout<<(int)sum<<endl;
     }
    }
    return 0;
}
