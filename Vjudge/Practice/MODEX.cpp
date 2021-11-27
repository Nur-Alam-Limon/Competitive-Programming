#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod(ll x,ll n,ll m)
{
    if(n==0) return 1;
    if(n%2) return ((x%m)*mod(x,n-1,m))%m;
    else
    {
        ll d=mod(x,n/2,m);
        return ((d%m)*(d%m))%m;
    }
}

int main()
{
    ll t;
    cin>>t;
    t++;
    while(t--)
    {
        ll x,n,m;
        cin>>x;
        if(x==0) break;
        cin>>n>>m;
        cout<<mod(x,n,m)<<endl;
    }
    return 0;
}
