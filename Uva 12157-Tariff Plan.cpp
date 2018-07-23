#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k=0,a[10000];
    cin>>t;
    while(t--)
    {
        k++;
       int sum=0,ans=0,vag=0;
       cin>>n;
       for(int i=0;i<n;i++)
            cin>>a[i];
       for(int i=0;i<n;i++)
       {
           vag=a[i]/30;
           sum+=vag*10+10;
           vag=a[i]/60;
           ans+=vag*15+15;
       }
       if(sum<ans)
        cout<<"Case "<<k<<": "<<"Mile "<<sum<<endl;
       else if(ans<sum)
           cout<<"Case "<<k<<": "<<"Juice "<<ans<<endl;
       else
        cout<<"Case "<<k<<": "<<"Mile "<<"Juice "<<sum<<endl;
    }
    return 0;
}
