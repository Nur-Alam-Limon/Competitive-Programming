#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[20005];
ll color[20005],a=0,b=0,ans=0;

void bfs(ll s)
{
    queue<ll>q;
    q.push(s);
    color[s]=1;
    a++;
    while(!q.empty())
    {
        ll z=q.front();
        q.pop();
        for(ll j=0;j<adj[z].size();j++)
        {
            if(color[adj[z][j]]==0)
            {
                q.push(adj[z][j]);
                if(color[z]==1) {color[adj[z][j]]=2; b++;}
                else {color[adj[z][j]]=1; a++;}
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,j=1;
    cin>>t;
    while(t--)
    {
        ll n,x,y,ans=0;
        for(ll i=0;i<20001;i++)
        {
            adj[i].clear();
            color[i]=0;
        }
        cin>>n;
        while(n--)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);

        }
        for(ll i=0;i<20005;i++)
        {
            if(!adj[i].empty() && color[i]==0)
            {
                a=0,b=0;
                bfs(i);
                ans+=max(a,b);
            }
        }
        cout<<"Case "<<j<<": "<<ans<<endl;
        j++;
    }
    return 0;
}
