#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int t,k=0;
    char str[10000];
    cin>>t;
    getchar();
    while(t--)
    {
        k++;

      gets(str);
      //getchar();
      int sum=0;
      int l=strlen(str);
      for(int i=0;i<l;i++)
      {
          if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')
                sum++;
          else if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='q'||str[i]=='u'||str[i]=='x'||str[i]=='n')
                sum+=2;
          else if(str[i]=='z'||str[i]=='s')
                sum+=4;
          else
               sum+=3;
      }

      cout<<"Case #"<<k<<": "<<sum<<endl;
    }
    return 0;
}
