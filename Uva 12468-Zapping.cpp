#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,sum,ans;
    while(cin>>a>>b)
    {
        if(a==-1&&b==-1)
            return 0;
       sum=0,ans=1000;
       if(a<b)
        swap(a,b);
       sum=abs(a-b);
       ans=(99-a)+b+1;
       if(ans>sum)
        swap(ans,sum);

       cout<<ans<<endl;
    }
    return 0;
}
