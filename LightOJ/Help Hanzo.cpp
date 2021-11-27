#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mx=100000;
ll prime[mx+5];
vector<ll>a;
vector<ll>sg;

void seive()
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<=mx;i+=2) prime[i]=1;
    for(ll i=3;i*i<=mx;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=mx;j+=i*2)
            {
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=mx;i++)
    {
        if(prime[i]==0) a.push_back(i);
    }
}

void segseive(ll s,ll e)
{
    sg.clear();
    ll x=sqrt(e)+1;

    for(ll i=s;i<=e;i++) sg.push_back(i);

    if(s==0) sg[1]=0;
    if(s==1) sg[0]=0;

    for(ll i=0;a[i]<=x;i++)
    {
        ll y=a[i];
        ll start=y*y;

        if(start<s)
        {
            start=((s+y-1)/y)*y;
        }

        for(ll i=start;i<=e;i+=y)
        {
            sg[i-s]=0;
        }
    }
}

int main()
{
    ll t;
    cin>>t;
    seive();
    for(ll i=1;i<=t;i++)
    {
        ll s,e,cnt=0;
        cin>>s>>e;
        segseive(s,e);

        for(ll i=s;i<=e;i++)
        {
            if(sg[i-s]!=0) cnt++;
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
    return 0;
}

