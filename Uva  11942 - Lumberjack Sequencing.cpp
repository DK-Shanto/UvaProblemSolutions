#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a[100],k=0,f,c;
    cin>>t;
    while(t--)
    {
        f=0,c=0;
        k++;
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<10;i++)
        {
            if(a[i]>a[i-1])
            {
                f=0;
                continue;
            }
            else
            {
                f=1;
                break;
            }
        }
        for(int i=1;i<10;i++)
        {
            if(a[i]<a[i-1])
            {
                c=0;
            }
            else
            {
                c=1;
                break;
            }
        }
        if(k==1&&(f==0||c==0))
        {
            cout<<"Lumberjacks:"<<endl;
            cout<<"Ordered"<<endl;
        }
        else if(f==0||c==0)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }
    return 0;
}
