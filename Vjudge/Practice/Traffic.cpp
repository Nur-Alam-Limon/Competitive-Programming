#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll INF=1e9+7;

struct edge
{
    ll a,b,cost;
}e[900];

int main()
{
    ll n,t=1;
    while(scanf("%lld ",&n)!=EOF)
    {
        ll buzy[n+5],d[n+5];
        memset(d,INF,sizeof(d));
        for(ll i=1;i<=n;i++) scanf("%lld",&buzy[i]);
        ll m;
        scanf("%lld",&m);
        for(ll i=1;i<=m;i++)
        {
            scanf("%lld %lld",&e[i].a,&e[i].b);
            ll pq=buzy[e[i].b]-buzy[e[i].a];
            e[i].cost=pq*pq*pq;
        }
        d[1]=0;
        for(ll i=1;i<n;i++)
            for(ll j=1;j<=m;j++)
            {
                if(d[e[j].a]<INF)
                {
                    if(d[e[j].b]>d[e[j].a]+e[j].cost)
                    {
                        d[e[j].b]=d[e[j].a]+e[j].cost;
                    }
                }
            }
        printf("Set #%lld\n",t);
        ll q,qp;
        scanf("%lld",&q);
        while(q--)
        {
            scanf("%lld",&qp);
            if(d[qp]<3 || d[qp]==INF) printf("?\n");
            else printf("%lld\n",d[qp]);
        }
    }
    return 0;
}
