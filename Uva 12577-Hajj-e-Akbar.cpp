#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int k=0;
    while(true)
    {
        k++;
        cin>>str;
        if(str=="Hajj")
            cout<<"Case "<<k<<": "<<"Hajj-e-Akbar"<<endl;
        else if(str=="Umrah")
            cout<<"Case "<<k<<": "<<"Hajj-e-Asghar"<<endl;
        else
            return 0;
    }
    return 0;
}
