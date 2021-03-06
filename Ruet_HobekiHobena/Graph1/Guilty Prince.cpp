#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll r,c;
char a[25][25];
ll vis[25][25];
ll dx[]={0,0,1,-1};
ll dy[]={1,-1,0,0};

ll bfs(ll x,ll y)
{
    ll ans=1;
    queue<pair<ll,ll>>q;
    q.push(make_pair(x,y));
    vis[x][y]=1;

    while(!q.empty())
    {
        ll qx=q.front().first;
        ll qy=q.front().second;
        q.pop();

        for(ll i=0;i<4;i++)
        {
            ll d=qx+dx[i];
            ll b=qy+dy[i];
            if(d>=0 && b>=0 && d<r && b<c && vis[d][b]!=1 && a[d][b]!='#')
            {
                ans++;
                vis[d][b]=1;
                q.push(make_pair(d,b));
            }
        }
    }
    return ans;
}

int main()
{
    ll t;
    cin>>t;
    for(ll k=1;k<=t;k++)
    {
        memset(vis,0,sizeof(vis));

        ll x=0,y=0;
        cin>>c>>r;
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='@') {x=i; y=j;}
            }
        }
        printf("Case %lld: %lld\n",k,bfs(x,y));
    }
    return 0;
}
