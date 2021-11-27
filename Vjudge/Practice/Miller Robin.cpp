#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int power(ll b,ll y,ll z)
{
    ll ans=1;
    b=b%z;

    while(y>0)
    {
        if(y&1) ans=(ans*b)%z;

        y=y>>1;
        b=(b*b)%z;
    }
    return ans;
}

bool miller(ll d,ll n)
{
    ll a=2+(rand()%(n-4));
    ll x=power(a,d,n);
    if(x==1 || x==n-1) return true;
    while(d!=n-1)
    {
        x=(x*x)%n;
        d=d*2;

        if(x==1) return false;
        if(x==(n-1)) return true;
    }
    return false;
}

bool isprime(ll n,ll it)
{
    if(n<=1 || n==4) return false;
    if(n%2==0 && n!=2) return false;
    if(n<=3) return true;

    ll d=n-1;
    while(d%2==0)
    {
        d=d/2;
    }
    for(ll i=0;i<it;i++)
        {if(!miller(d,n)) return false;}

    return true;
}

int main()
{
    ll t,it,n;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        cin>>n;
        if(n>20) it=20;
        else it=n;
        if(isprime(n,it)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
