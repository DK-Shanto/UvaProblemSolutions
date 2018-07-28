#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,sum;
    while(cin>>n)
    {
        sum=0;
        if(n==0)
            return 0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum+=__gcd(i, j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
