#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool prime[10000007];

void seive()
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<=10000005;i+=2) prime[i]=1;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=n;j+=2*i) prime[j]=1;
        }
    }
}

int main()
{
    seive();
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {

    }
    return 0;
}


