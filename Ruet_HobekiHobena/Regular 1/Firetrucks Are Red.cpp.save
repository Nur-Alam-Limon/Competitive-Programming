#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[1000005];
vector<map<ll,ll>>adj1;
ll vis[1000005]={0};

int main()
{
    ll n,flag=0,cnt=0;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        ll m;
        cin>>m;
        while(m--)
        {
            ll x;
            cin>>x;
            mp[x]++;
            adj1[x].push_back(i);
            adj[i].push_back(x);
        }
    }
    for(ll i=1;i<=n;i++)
    {
        cnt=0;
        for(ll j=0;j<adj[i].size();j++)
        {
            if(mp[adj[i][j]]>=2) {cnt++; break;}
        }
        if(cnt==0) {flag=1; break;}
    }
    if(flag)  {cout<<"impossible"<<endl; return 0;}
    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<adj[i].size();j++)
        {
            ll z=adj[i][j];
            if(adj1[z].size()>1)
            {
                for(ll k=1;k<adj1[z].size();k++)
                {
                    if(vis[adj1[z][k]]==0)
                    {
                        vis[adj1[z][k]]=1;
                        cout<<adj1[z][0]<<" "<<adj1[z][k]<<" "<<z<<endl;
                    }
                }
            }
        }
    }
    return 0;
}

