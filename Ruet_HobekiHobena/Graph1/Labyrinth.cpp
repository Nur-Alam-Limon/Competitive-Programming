#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll row,col,l,r,x,y;
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
            if(d>=0 && b>=0 && d<row && b<col && vis[d][b]!=1 && a[d][b]!='*')
            {
                if(b<y && b<y-l-1) continue;
                if(b>y && b>y+r-1) continue;
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
    memset(vis,0,sizeof(vis));

    cin>>row>>col;
    cin>>x>>y>>l>>r;
    for(ll i=0;i<row;i++)
    {
        for(ll j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<bfs(x,y)<<endl;

    return 0;
}

