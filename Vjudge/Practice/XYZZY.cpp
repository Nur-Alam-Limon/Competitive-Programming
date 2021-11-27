#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll INF=1000000;

struct edge
{
    ll a,b,cost;
}e[100000];

int main()
{
    ll x=1;
    while(x)
    {
        ll n,p=0;
        cin>>n;
        if(n==-1) break;
        for(ll i=0;i<n;i++)
        {
            ll y,z;
            cin>>y>>z;
            if(y==0 && z==0) break;
            while(z--)
            {
                ll q;
                cin>>q;
                e[p].a=i+1;
                e[p].b=q;
                e[p].cost=y;
                p++;
            }
        }
        ll d[10000];
        for(ll i=0;i<=n+5;i++) d[i]=INF;
        d[1]=0;
        for(ll i=0;i<n-1;i++){
            for(ll j=0;j<p;j++)
            {
            if(d[e[j].a]<INF)
            {
                d[e[j].b]=min(d[e[j].b],d[e[j].a]+e[j].cost);
            }
            }
        }
        cout<<d[n]+100<<endl;
        if(d[n]+100>0) cout<<"winnable"<<endl;
        else cout<<"hopeless"<<endl;
    }
    return 0;
}
