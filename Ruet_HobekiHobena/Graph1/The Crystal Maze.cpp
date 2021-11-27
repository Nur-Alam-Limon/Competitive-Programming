#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll r,c,x,y,cnt=0;
char a[505][505];
ll vis[505][505],tem[505][505],ans[500005];

void bfs(ll x,ll y,ll cnt)
{
    vis[x][y]=1;
    tem[x][y]=cnt;
    if(a[x][y]=='C') ans[cnt]++;

    if(y<c-1 && vis[x][y+1]!=1 && a[x][y+1]!='#')
    {
        bfs(x,y+1,cnt);
    }
    if(y>0 && vis[x][y-1]!=1 && a[x][y-1]!='#')
    {
        bfs(x,y-1,cnt);
    }
    if(x<r-1 && vis[x+1][y]!=1 && a[x+1][y]!='#')
    {
        bfs(x+1,y,cnt);
    }
    if(x>0 && vis[x-1][y]!=1 && a[x-1][y]!='#')
    {
        bfs(x-1,y,cnt);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    for(ll k=1;k<=t;k++)
    {
        memset(vis,0,sizeof(vis));
        memset(ans,0,sizeof(ans));

        ll q;
        cin>>r>>c>>q;
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
        cnt=0;
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {
                if(!vis[i][j] && a[i][j]!='#') bfs(i,j,cnt);
                cnt++;
            }
        }
        cout<<"Case "<<k<<":"<<endl;
        while(q--)
        {
            cin>>x>>y;
            cout<<ans[tem[x-1][y-1]]<<endl;
        }
    }
    return 0;
}

