#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll lim=1000000009;

vector<ll>prime;
ll status[10000007];

bool check(ll N,ll pos)
{
    return (bool) (N&(1<<pos));
}

ll set1(ll N,ll pos)
{
    return N=N||(1<<pos);
}

void seive()
{
    for(ll i=3;i*i<=lim;i=i+2)
    {
        if(check(status[i<<5],i&31)==0)
        {
            for(ll j=i*i;j<=lim;j+=2*i)
            {
                status[j>>5]=set1(status[j>>5],j&31);
            }
        }
    }
    prime.push_back(1);
    prime.push_back(2);

    for(ll i=3;i<=lim;i+=2)
    {
        if(check(status[i>>5],i&31)==0) prime.push_back(i);
    }
}

int main()
{
    seive();
    ll n,b;
    cin>>n>>b;
    for(ll i=0;i<n*n;i++)
    {
        cout<<prime[i]<<endl;
    }
    return 0;
}

