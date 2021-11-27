#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mx=100000000;

ll c[10000000];

ll prime[10000000];

ll setprime(ll n,ll m)
{
    return n= n|(1<<m);
}

ll checkprime(ll n,ll m)
{
    return (bool)(n&(1<<m));
}

int main()
{
    for(ll i=3;i*i<=mx;i=i+2)
    {
        if(checkprime(c[i>>5],i&31)==0)
        for(ll j=i*i;j<=mx;j+=(i<<1))
        {
            c[j>>5]=setprime(c[j>>5],j&31);
        }
    }
    prime[0]=2;
    ll k=1;
    for(ll i=3;i<=mx;i=i+2)
    {
        if(checkprime(c[i>>5],i&31)==0) {prime[k]=i; k++;}
    }
    for(ll i=0;i<k;i+=100)
        cout<<prime[i]<<endl;

    return 0;
}
