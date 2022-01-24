#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define tc ll t;cin>>t;for(ll c=1;c<=t;c++)





int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();


    ll n,x,y;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        vector<pair<ll,ll> >v;
        map<ll,ll>mp;
        bool flag=false;
        for(ll i=1;i<=n;i++)
        {
            cin>>x>>y;
            if(mp[i+y]==0 && i+y>0 && i+y<=n)
            {
                v.push_back(make_pair(i+y,x));
                mp[i+y]=1;
            }
            else
                flag=true;
        }
        if(flag)
            cout<<-1<<endl;
        else
        {
            sort(v.begin(),v.end());
            for(ll i=0;i<n-1;i++)
                cout<<v[i].second<<" ";
            cout<<v[n-1].second<<endl;
        }
    }
}
