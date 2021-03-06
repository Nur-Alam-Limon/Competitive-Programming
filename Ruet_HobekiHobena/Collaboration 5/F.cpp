// Crazy_Dreamer


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define forn(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((ll)(x).size())
#define el endl
#define pi acos(-1.0)
#define fio     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define tst cin>>t; while(t--)
#define sz 410

typedef pair<ll,ll>pll;
typedef unordered_map<ll,ll>mll;
typedef vector<pll>vl;
typedef set<ll>sl;
typedef multiset<ll>msl;
typedef priority_queue<ll>prl;
typedef stack<pll>st;
const ll mod=1000000007;
// ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}

//  DFS


ll W, n, k;
vl ans;
ll cmin=INT_MAX;
ll col[sz][sz], wei[sz][sz];
bool vis[sz][sz];
void init()
{
    memset(vis,0,sizeof vis);
}
void dfs(ll u,ll v, mll mp, ll w,ll c,st sk)
{
    ///printf(" u-- %lld  v-- %lld  w--- %lld \n",u,v,wei[u][v]);
    if(u==n && v==n)
    {


        w+=wei[u+1][v];

        if(mp[col[u][v]]==0)
        {
            c++;
            mp[col[u][v]]=1;
        }

      if(w<=W)
      {
          if(c<cmin)
          {
            cmin=c;
              ans.clear();

              while(!sk.empty())
              {
                  pll x = sk.top();
                  sk.pop();
                  ans.pb(x);
              }
          }
/*
          forn(i,0,ans.size())
          cout<<ans[i].first<<" "<<ans[i].second<<" ";
          cout<<el;
          */
      }
/*
        printf(" w-- %lld  c--  %lld\n",w,c);
        for(auto I = mp.begin();I!=mp.end();I++)
        {
            if(I->second>0)
            cout<<I->first<<el;
        }
    */
        return;
    }

    ll x = c, y = c,l=w,r=w;
    if(u+1<= n && vis[u+1][v]==0)
    {
        vis[u+1][v]=1;

        mll mp1 = mp;
        if(mp1[col[u+1][v]]==0)
        {
            x++;
            mp1[col[u+1][v]]=1;
        }
        l+=wei[u+1][v];
        sk.push(pll(u+1,v));
        dfs(u+1,v,mp1,w+wei[u+1][v],x,sk);

        sk.pop();

        vis[u+1][v]=0;

    }
    if(v+1 <= n && vis[u][v+1]==0)
    {
        vis[u][v+1]=1;
        mll mp2 = mp;
        if(mp2[col[u][v+1]]==0)
        {
            y++;
            mp2[col[u][v+1]]=1;
        }
        r+=wei[u][v+1];
        sk.push(pll(u,v+1));

        dfs(u,v+1,mp2,w+wei[u][v+1],y,sk);
        sk.pop();
        vis[u][v+1]=0;
    }
}

int main()
{

    fio

    ll t,i,j,m,a,b,c=0,tc=1;

    //tst
    {

        cin>>n>>k>>W;


        forn(i,1,n+1)
        {
            forn(j,1,n+1)
            {
                cin>>wei[i][j];
            }
        }


        forn(i,1,n+1)
        {
            forn(j,1,n+1)
            {
                cin>>col[i][j];
            }
        }
        mll mp;
        st sk;
        sk.push(pll(1,1));
        mp[col[1][1]]=1;
        dfs(1,1,mp,wei[1][1],1,sk);


        if(ans.size()==0)
            cout<<-1<<el;
        else
        {
            cout<<cmin<<el;
            for(i=ans.size()-1;i>=0;i--)
        cout<<ans[i].first<<" "<<ans[i].second<<" ";
        cout<<el;
        }


    }


    return 0;
}
