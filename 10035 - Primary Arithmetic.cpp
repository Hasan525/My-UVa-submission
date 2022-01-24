#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)


int main()
{
    ull n,m,cnt=0,carry=0,x,y;

    while(cin>>n>>m)
    {
        carry=cnt=0;
        if(n==0 && m==0)
            break;
        while(n || m)
        {
           x=n%10;
           n/=10;
           y=m%10;
           m/=10;
           if(x+y+cnt>9)
           {
               carry++;
               cnt=1;
           }
           else
            cnt=0;

        }
         if(carry)
            cout<<carry<<" "<<"carry operations."<<endl;
          else
            cout<<"No carry operation."<<endl;

    }

}
