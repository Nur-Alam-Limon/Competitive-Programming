#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,ans=0,x=0,y=0;
        cin>>n>>m;
        ll b[n+5];
        memset(b,0,sizeof(b));
        vector<pair<ll,ll>>p;
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            p.push_back(make_pair(x,y));
            b[y]=1;
        }
        sort(p.begin(),p.end());
        for(ll i=0;i<m;i++)
        {
            x=p[i].second;
            y=p[i].first;
            if(p[i].first==p[i].second) {b[x]=0; b[y]=0; continue;}
            else if(b[y]==1) {ans+=2;}
            else ans+=1;
            b[x]=0;
            b[y]=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}


