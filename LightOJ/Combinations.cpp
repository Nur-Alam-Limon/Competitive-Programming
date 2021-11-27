#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ar[1000005];
ll m=1000003;

void fac()
{
    ar[0]=1;
    ar[1]=1;
    for(ll i=2;i<=1000000;i++)
    {
        ar[i]=((ar[i-1]%m)*(i%m))%m;
    }
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
    ll t;
    fac();
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n,k;
        cin>>n>>k;
        if(k==0 || n==k) {cout<<"Case "<<i<<": "<<1<<endl; continue;}
        ll p=ar[n];
        ll q=(ar[k]*ar[n-k])%m;
        ll s=bmod(q,m-2);
        cout<<"Case "<<i<<": "<<(p*s)%m<<endl;
    }
    return 0;
}
