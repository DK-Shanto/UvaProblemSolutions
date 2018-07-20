#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,k=0;
    cin>>t;
    while(t--)
    {
        k++;
        int max=0,a;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            {
                cin>>a;
                if(a>max)
                    max=a;
            }
        cout<<"Case "<<k<<": "<<max<<endl;
    }
    return 0;
}
