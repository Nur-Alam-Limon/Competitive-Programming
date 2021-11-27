#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[302];
vector<ll>a[302];

ll v[302]={0};
ll cnt=0;

void dfs(ll n)
{
    v[n]=1;
    cnt++;
    for(ll i=0;i<adj[n].size();i++)
    {
        if(v[adj[n][i]]==0)
        {
            dfs(adj[n][i]);
        }
    }
}

int main()
{
    ll n,k,x,y,z,w=0,r=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>w;
        for(ll j=0;j<w;j++)
        {
            cin>>r;
            a[i].push_back(r);
        }
        sort(a[i].begin(), a[i].end());
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            x=0;
            y=0;
            z=0;
            while(x<a[i].size() && y<a[j].size())
            {
                if(a[i][x] < a[j][y]) x++;
                else if(a[i][x] > a[j][y]) y++;
                else {z++; x++; y++;}
            }
            if(z>=k)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    dfs(0);
    cout<<cnt<<endl;
    return 0;
}
