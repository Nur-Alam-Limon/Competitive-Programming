#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll m=1000000007;

ll fac(ll n)
{
    ll ar=1;
    for(ll i=2;i<=n;i++)
    {
        ar=((ar%m)*(i%m))%m;
    }
    return ar%m;
}

ll bmod(ll x,ll n)
{
    if(n==0) return 1;
    if(n%2) return ((x%m)*bmod(x,n-1))%m;
    else
    {
        ll a=bmod(x,n/2);
        return ((a%m)*(a%m))%m;
    }
}

int main()
{
    ll n;
    cin>>n;
    ll x=fac(n);
    cout<<x<<endl;
    ll y=((fac(n-2)%m)*2)%m;
    cout<<x/y<<endl;
    ll ans=bmod(y,m-2);
    cout<<(((x%m)*(ans%m))%m)<<endl;
    return 0;
}
