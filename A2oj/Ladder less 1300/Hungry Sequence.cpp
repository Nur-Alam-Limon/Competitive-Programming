#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mx=10000005;
ll prime[10000009];
vector<ll>p;

void seive()
{
    memset(prime,0,sizeof(prime));
    prime[0]=prime[1]=1;
    for(ll i=4;i<=mx;i+=2) prime[i]=1;

    for(ll i=3;i*i<=mx;i+=2)
    {
        if(prime[i]==0){
        for(ll j=i*i;j<=mx;j+=i*2)
            prime[j]=1;
        }
    }p.push_back(2);
    for(ll i=3;i<=mx;i+=2)
    {
        if(!prime[i]) p.push_back(i);
    }
}

int main()
{
    seive();
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++) cout<<p[i]<<" ";
    cout<<endl;
}
