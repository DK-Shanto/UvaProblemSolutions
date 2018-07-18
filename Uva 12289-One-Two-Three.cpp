#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>str;
        int a=0,b=0,c=0;
        int x=str.size();
        if(x==5)
            cout<<"3"<<endl;
        else
        {
            for(int i=0;i<x;i++)
            {
                if(str[i]=='o')
                    a++;
                else if(str[i]=='n')
                    b++;
                else if(str[i]=='e')
                    c++;
            }
            if((a>=1&&b>=1&&c==0)||(a>=1&&c>=1&&b==0)||(b>=1&&c>=1&&a==0))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
    }
    return 0;
}
