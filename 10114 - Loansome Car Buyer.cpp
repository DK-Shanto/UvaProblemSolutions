#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int month,numd;
    double loan,downpay,dep[101];
    while(1)
    {
        cin>>month>>downpay>>loan>>numd;
        if(month<0)
            break;
        while(numd--)
        {
            int m;
            double depv;
            cin>>m>>depv;
            for(int i=m;i<101;i++)
                dep[i]=depv;
        }
        int mon=0;
        double monthlypay=loan/month;
        double curval=(loan+downpay)*(1-dep[0]);
        double loanval=loan;
        while(curval<loanval)
        {
           mon++;
           curval=curval*(1-dep[mon]);
           loanval-=monthlypay;
        }
        if(mon==1)
        cout<<mon<<" month"<<endl;
        else
        cout<<mon<<" months"<<endl;
    }
    return 0;
}
