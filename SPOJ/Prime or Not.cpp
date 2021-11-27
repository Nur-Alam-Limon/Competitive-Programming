#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll power(ll b,ll y,ll z)
{
    ll ans=1;
    b=b%z;

    while(y>0)
    {
        if(y%2==1) ans=((ans%z)*(b%z))%z;

        y=y/2;
        b=((b%z)*(b%z))%z;
    }
    return ans%z;
}

bool miller(ll d,ll n)
{
    ll a=2+(rand()%(n-4));
    ll x=power(a,d,n);
    if(x==1 || x==n-1) return true;
    while(d!=n-1)
    {
        x=((x%n)*(x%n))%n;
        d=d*2;

        if(x==1) return false;
        if(x==(n-1)) return true;
    }
    return false;
}

bool isprime(ll n)
{
    if(n<=4 && n!=2 && n!=3) return false;
    if(n==2 || n==3) return true;

    ll d=n-1;
    while(d%2==0)
    {
        d=d/2;
    }
    for(ll i=0;i<1;i++)
        {if(!miller(d,n)) return false;}

    return true;
}

int main()
{
    ll t,n;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>n;
        if(isprime(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
