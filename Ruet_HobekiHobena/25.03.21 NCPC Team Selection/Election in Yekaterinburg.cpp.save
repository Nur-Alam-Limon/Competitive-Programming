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
#define sz 100050

typedef pair<ll,ll>pll;
typedef pair<pll,ll>pl;
typedef unordered_map<ll,ll>mll;
typedef vector<pl>vl;
typedef vector<ll>vll;

typedef set<ll>sl;
typedef multiset<ll>msl;
typedef priority_queue<ll>prl;

const ll mod=1000000007;

int main()
{

    fio

    ll t,n,i,j,m,k,a,b,c=0,tc=1;



    tst
    {

    ll v;

    cin>>n>>k>>v;
    mll cnt,pre;
    forn(i,0,n)
    {
        cin>>m;

        ll ar[m];
        forn(j,0,m)
        {
            cin>>ar[j];
        }

        mll chk;
        ll c = 0;
        ll prr = 0;
        forn(j,0,m)
        {
            if(c==v)
                break;
           if((ar[j]>=1 && ar[j]<=k) && chk[ar[j]]==0)
           {
               chk[ar[j]]=1;
               cnt[ar[j]]++;
               pre[ar[j]]-=prr;
               c++;
               prr++;
           }
           else if(ar[j]<1 && ar[j]>k)
            {
               // c++;
               // prr++;
            }
        }
    }
    vl vc;

    forn(i,1,k+1)
    {
        vc.pb(pl(pll(cnt[i],pre[i]),-i));
       //cout<<"i--- "<<i<<" cnt--- "<<cnt[i]<<"   pre--- - "<<pre[i]<<el;
    }

    sort(vc.rbegin(),vc.rend());

    vll ans;
    ll pr,cn;
    /*
    forn(i,0,k)
    {
       // printf("i---  %lld   cnt--- %lld    pre--- %lld\n",-1*vc[i].second,vc[i].first.first,vc[i].first.second);
    }
*/
    forn(i,0,v)
    {

      //  cout<<-1*vc[i].second<<" ";
     pr=vc[i].first.second;
     cn= vc[i].first.first;
     ll j = i+1;
     vll vcc;
     vcc.pb(-1*vc[i].second);
     while(j<k && pr==vc[j].first.second && cn==vc[j].first.first)
     {
        vcc.pb(-1*vc[j].second);
        j++;
     }
     //printf(" j---  %lld \n",j);
     if(j!=i+1)
     {
         sort(vcc.rbegin(),vcc.rend());
         forn(l,0,vcc.size())
         {
             ans.pb(vcc[l]);
         }
         i=j-1;
         continue;
     }


     ans.pb(-1*vc[i].second);

    }
/*
    forn(i,v,k)
    {
        if(pr==vc[i].first.second && cn== vc[i].first.first)
            ans.pb(-1*vc[i].second);
        else
            break;
    }
*/
   forn(i,0,ans.size())
   cout<<ans[i]<<" ";
   cout<<el;


    }


    return 0;
}


