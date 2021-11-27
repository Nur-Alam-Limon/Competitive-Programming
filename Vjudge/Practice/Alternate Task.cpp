#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mx=1000005;
ll p[mx+2];
vector<ll>prime;
ll sum[10000005];

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

void sumofdiv(ll l)
{
    ll ans1=1;
    ll y=l;
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
            ans1*=((pow(prime[i],cnt)-1)/(prime[i]-1));
            if(l==1) break;
        }
    }
    if(l!=1) ans1*=((pow(l,2)-1)/(l-1));
    sum[ans1]=y;
}

int main()
{
    ll n,k=1,ans=0;
    seive();
    for(ll i=1;i<=100000;i++) sumofdiv(i);
    while(cin>>n)
    {
        if(n==0) break;
        if(sum[n]==0) ans=-1;
        else ans=sum[n];
        cout<<"Case "<<k<<": "<<ans<<endl;
        k++;
    }
    return 0;
}

