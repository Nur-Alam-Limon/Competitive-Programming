#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mx=1000009;
map<ll,ll>prime;
ll cnt=0,sump=0;


void seive()
{
    prime[0]=prime[1]=1;

    for(ll i=4;i<=mx;i+=2) prime[i]=1;

    for(ll i=3;i*i<=mx;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=mx;j+=2*i) prime[j]=1;
        }
    }
}

ll primefactor(ll n)
{
    while(n%2==0)
    {
        sump+=2;
        n=n/2;
    }
    for(int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            sump+=i;
            n=n/i;
        }
    }
    if(n>2)
    {
        sump+=n;
    }
    return sump;
}

int main()
{
    ll n,x,y=0;
    seive();
    while(cin>>n)
    {
        if(n==4) break;
        cnt=1,sump=0;

        if(prime[n]==0) {cout<<n<<" "<<cnt<<endl; continue;}

        y=primefactor(n);
        for(;prime[y]!=0;)
        {
            cnt++;
            sump=0;
            y=primefactor(y);
        }
        cout<<y<<" "<<cnt+1<<endl;
    }
    return 0;
}

