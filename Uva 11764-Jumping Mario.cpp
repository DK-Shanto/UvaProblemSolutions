#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a[10000],h,l,k=0;
    cin>>t;
    while(t--)
    {
        k++;
        cin>>n;
        h=0,l=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1]&&a[i]>a[i-1])
                h++;
            else if(a[i]<a[i-1])
                l++;
        }
        cout<<"Case "<<k<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
