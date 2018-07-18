#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int i=0;
    while(true)
    {
        i++;
        cin>>str;
        if(str=="#")
            break;
        else if(str=="HELLO")
            str="ENGLISH";
        else if(str=="HOLA")
            str="SPANISH";
        else if(str=="HALLO")
            str="GERMAN";
        else if(str=="BONJOUR")
            str="FRENCH";
        else if(str=="CIAO")
            str="ITALIAN";
        else if(str=="ZDRAVSTVUJTE")
            str="RUSSIAN";
        else
            str="UNKNOWN";

        cout<<"Case "<<i<<": "<<str<<endl;
    }
    return 0;
}
