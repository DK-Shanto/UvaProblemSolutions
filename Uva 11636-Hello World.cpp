#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,k=0;
    while(cin>>t)
    {
        k++;
        if(t<0)
            return 0;
            int i=1,sum=0;;
        while(i<t)
        {
            i=i+i;
            if(i<t)
            {
                sum++;
            }
            else if(i==t)
            {
                sum++;
                break;
            }
            else
            {
               sum++;
               break;
            }
        }
        cout<<"Case "<<k<<": "<<sum<<endl;
    }
    return 0;
}
