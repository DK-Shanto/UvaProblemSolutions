#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        double k;
        int l,sum=0;
        if(n==0&&m==0)
            return 0;
        for(int i=n;i<=m;i++)
        {
            k=sqrt(i);
            l=(int)k;
            if(k==l)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
