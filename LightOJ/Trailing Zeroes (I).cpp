#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mx=1000005;
ll p[mx+5];
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
            if(l==1 || l==0) break;
        }
    }
    if(l!=1) ans1*=2;
    return ans1-1;
}

int main()
{
    ll n;
    cin>>n;
    seive();
    for(ll i=1;i<=n;i++)
    {
        ll l,y;
        cin>>l;
        y=nmbrofdiv(l);
        cout<<"Case "<<i<<": "<<y<<endl;
    }
    return 0;
}

