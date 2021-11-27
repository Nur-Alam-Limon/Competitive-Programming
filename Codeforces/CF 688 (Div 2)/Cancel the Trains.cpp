#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,ans=0;
        cin>>n>>m;
        ll x,y;
        map<int,int> c;
        for(ll i=0;i<n;i++) {cin>>x; c[x]++;}
        for(ll i=0;i<m;i++) {cin>>y; c[y]++;}
        for(ll i=1;i<101;i++) {if(c[i]>1) ans++;}
        cout<<ans<<endl;
    }
    return 0;
}
