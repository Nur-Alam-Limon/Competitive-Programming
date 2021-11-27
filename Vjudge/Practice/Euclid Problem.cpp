#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll exeuclid(ll a,ll b,ll &x,ll &y)
{
    if(a==0)
    {
        x=0;
        y=1;
        return b;
    }
    ll x1,y1;
    ll d=exeuclid(b%a,a,x1,y1);
    y=x1;
    x=y1-(b/a)*x1;
    return d;
}

int main()
{
    ll a,b;
    while(scanf("%lld %lld",&a,&b)==2)
    {
    ll x,y;
    ll gcd=exeuclid(a,b,x,y);
    if(a==b) {x=0; y=1;}
    cout<<x<<" "<<y<<" "<<gcd<<endl;
    }
    return 0;
}
