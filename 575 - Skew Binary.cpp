#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    long long int sum,k,l;
    while(cin>>str)
    {
        sum=0,k=1;
        if(str=="0")
            return 0;
        l=str.size();
        for(int i=l-1;i>=0;i--)
        {
            str[i]=str[i]-'0';
            sum+=(str[i])*((pow(2,k))-1);
            k++;
        }

        cout<<sum<<endl;
    }
    return 0;
}
