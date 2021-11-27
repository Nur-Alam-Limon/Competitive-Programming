#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool prime[1111115];
vector<ll>p;

void seive(ll n)
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<=n;i+=2) prime[i]=1;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
    p.push_back(2);
    for(ll i=3;i<=n;i+=2)
    {
        if(prime[i]==0) {p.push_back(i);}
    }
}

int main()
{
    ll t;
    seive(1111111);
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
    }
    return 0;
}
