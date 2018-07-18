#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,i;
    while(cin>>n)
    {
        i=0;
        while(n--)
        {
            i++;
            cin>>a>>b>>c;
            if((a>b&&a<c)||(a<b&&a>c))
                cout<<"Case "<<i<<": "<<a<<endl;
            else if((b>a&&b<c)||(b<a&&b>c))
                cout<<"Case "<<i<<": "<<b<<endl;
            else
                cout<<"Case "<<i<<": "<<c<<endl;
        }
    }
    return 0;
}
