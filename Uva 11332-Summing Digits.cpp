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
    m:
    if(n/10==0)
        cout<<n<<endl;
    else
    {
        sum=0;
        while(n>0)
        {
           sum+=n%10;
           n/=10;
        }
        if(sum/10==0)
            cout<<sum<<endl;
        else
        {
            n=sum;
            goto m;
        }
     }
    }
    return 0;
}
