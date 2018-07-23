#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,l=0,k=0,m[101];
    cin>>t;
    string str[101];
    while(t--)
    {
        k++;
        for(int i=0;i<10;i++)
        {
            cin>>str[i];
            cin>>m[i];
        }
        l=m[0];
        for(int i=1;i<10;i++)
        {
            if(m[i]>l)
                l=m[i];
        }
        cout<<"Case #"<<k<<":"<<endl;
        for(int i=0;i<10;i++)
        {
            if(m[i]==l)
                cout<<str[i]<<endl;
        }
    }
    return 0;
}
