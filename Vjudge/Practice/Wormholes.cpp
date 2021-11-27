#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll INF=10000000000;

struct edge
{
    ll a,b,cost;
}e[20000];

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,y;
        cin>>n>>m;
        ll d[n+5];
        for(ll i=0;i<=n;i++) d[i]=INF;
        for(ll i=0;i<m;i++)
        {
            cin>>e[i].a;
            cin>>e[i].b;
            cin>>e[i].cost;
        }
        d[0]=0;
        for(ll i=0;i<n;i++)
        {
            y=-1;
            for(ll j=0;j<m;j++)
            {
                if(d[e[j].a]<INF){
                    if(d[e[j].b]>(d[e[j].a]+e[j].cost))
                    {
                        d[e[j].b]=d[e[j].a]+e[j].cost;
                        y=1;
                    }}
            }
        }
        if(y==1) cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;
    }
    return 0;
}
