#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,k=0;
    cin>>t;
    while(t--)
    {
       k++;
       long long int a,b,c;
       cin>>a>>b>>c;
       if((a+b<=c)||(b+c<=a)||(c+a<=b))
          cout<<"Case "<<k<<": "<<"Invalid"<<endl;
       else if(a<=0||b<=0||c<=0)
        cout<<"Case "<<k<<": "<<"Invalid"<<endl;
       else if(a==b&&b==c)
               cout<<"Case "<<k<<": "<<"Equilateral"<<endl;
       else if(a==b||b==c||a==c)
            cout<<"Case "<<k<<": "<<"Isosceles"<<endl;
        else
            cout<<"Case "<<k<<": "<<"Scalene"<<endl;
     }
    return 0;
}
