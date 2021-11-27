#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll prime[1001];
vector<ll>a;

void check()
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<=1000;i+=2) prime[i]=1;
    for(ll i=3;i*i<=1000;i+=2)
    {
        if(prime[i]==0)
            for(ll j=i*i;j<=1005;j+=i)
            {
                prime[j]=1;
            }
    }
    a.push_back(1);
    for(ll i=2;i<=1000;i++)
    {
        if(prime[i]==0) {a.push_back(i);}
    }
}

int main()
{
    ll n,m;
    check();
    while(cin>>n>>m)
    {
    vector<ll> v;
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]>n) break;
        v.push_back(a[i]);
    }
    cout<<n<<" "<<m<<":";
    ll p=v.size();
    if(p%2==0)
    {
        if((m*2)>=p)
        {
            for(ll i=0;i<p;i++) cout<<" "<<v[i];
        }
        else
        {
            ll x=p-(m*2);
            x=x/2;
            for(ll i=x;i<p-x;i++) cout<<" "<<v[i];
        }
    }
    else
    {
        if((m*2)-1>=p)
        {
            for(ll i=0;i<p;i++) cout<<" "<<v[i];
        }
        else
        {
            ll x=p-(m*2)+1;
            x=x/2;
            for(ll i=x;i<p-x;i++) cout<<" "<<v[i];
        }
    }
    cout<<"\n\n";
    }
    return 0;
}
