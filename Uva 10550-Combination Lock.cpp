#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,sum=0,t1=0,t2,t3;
    while(cin>>a>>b>>c>>d)
    {
        sum=0;
        if(a==0&&b==0&&c==0&&d==0)
            break;
        else
        {
            if(a<b)
                t1=40-b+a;
            else
                t1=a-b;
            if(b>c)
                t2=40-b+c;
            else
                t2=c-b;
            if(d>c)
                t3=40-d+c;
            else
                t3=c-d;
        }
        sum=360*3+(t1+t2+t3)*9;
        cout<<sum<<endl;
    }
    return 0;
}
