#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int k=0;
    while(cin>>str)
    {
       k++;
       if(k==1)
            cout<<"*CDC is the trademark of the Control Data Corporation."<<endl;
       else if(k==2)
         cout<<"*IBM is a trademark of the International Business Machine Corporation."<<endl;
       else if(k==3)
        cout<<"*DEC is the trademark of the Digital Equipment Corporation."<<endl;
    }
    return 0;
}
