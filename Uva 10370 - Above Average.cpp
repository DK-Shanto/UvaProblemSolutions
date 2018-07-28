#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a[10000];
    cin>>t;
    while(t--)
    {
        double coun;
        int sum=0,k=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        sum=sum/n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>sum)
                k++;
        }
        coun=(k/(double)n);
        coun*=100;
        printf("%.3lf",coun);
        cout<<"%"<<endl;
    }
    return 0;
}
