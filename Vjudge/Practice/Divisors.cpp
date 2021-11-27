#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mx=10000000;
ll p[mx+2];
vector<ll>prime;

void seive()
{
    p[0]=p[1]=1;
    for(ll i=4;i<=mx;i+=2) p[i]=1;
    for(ll i=3;i*i<=mx;i++)
    {
        if(p[i]==0)
        {
            for(ll j=i*i;j<=mx;j+=i*2) p[j]=1;
        }
    }
    for(ll i=2;i<=mx;i++)
    {
        if(p[i]==0) prime.push_back(i);
    }

}

ll nmbrofdiv(ll l)
{
    ll ans1=1;
    for(ll i=0;prime[i]<=sqrt(l);i++)
    {
        if(l%prime[i]==0)
        {
            ll cnt=1;
            while(l%prime[i]==0)
            {
                l=l/prime[i];
                cnt++;
            }
            ans1*=cnt;
            if(l==1) break;
        }
    }
    if(l>1) ans1*=2;
    return ans1;
}

int main()
{
    ll n;
    cin>>n;
    seive();
    while(n--)
    {
        ll l,u,ans=0,z=0;
        cin>>l>>u;
        for(ll i=l;i<=u;i++)
        {
            ll y=nmbrofdiv(i);
            if(y>ans) {ans=y; z=i;}
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<z<<" has a maximum of "<<ans<<" divisors."<<endl;
    }
    return 0;
}
