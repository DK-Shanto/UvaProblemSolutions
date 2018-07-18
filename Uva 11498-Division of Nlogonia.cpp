#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,m,a[10000],b[10000];
    while(true)
    {
        cin>>k;
    if(k==0)
        return 0;
   else
    {
        cin>>n>>m;
        for(int i=0;i<k;i++)
            cin>>a[i]>>b[i];

        for(int i=0;i<k;i++)
        {
            if(a[i]==n||b[i]==m)
                cout<<"divisa"<<endl;
            else if(a[i]>n&&b[i]>m)
                cout<<"NE"<<endl;
            else if(a[i]<n&&b[i]>m)
                cout<<"NO"<<endl;
            else if(a[i]<n&&b[i]<m)
                cout<<"SO"<<endl;
            else if(a[i]>n&&b[i]<m)
                cout<<"SE"<<endl;
        }
     }
    }
    return 0;
}
