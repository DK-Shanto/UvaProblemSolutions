#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,p[101],a,n,sum;
    char str[101];
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>str;
            if(strcmp(str,"LEFT")==0)
            {
                sum-=1;
                p[i]=-1;
            }
            else if(strcmp(str,"RIGHT")==0)
            {
                sum+=1;
                p[i]=1;
            }
            else
            {
                cin>>str>>a;
                sum+=p[a];
                p[i]=p[a];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
