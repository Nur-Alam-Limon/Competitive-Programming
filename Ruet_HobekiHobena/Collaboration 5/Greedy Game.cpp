#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define forn(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
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
typedef set<pl>sl;
typedef multiset<ll>msl;
typedef priority_queue<ll>prl;

const ll mod=1000000007;
// ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}


int main()
{

    fio

    ll t,n,i,j,m,k,a,b,c=0,tc=1;

    tst
    {
        sl fs,sn;


        cin>>n;

        ll ar[n],br[n];

        forn(i,0,n)
        cin>>ar[i];
        forn(i,0,n)
        cin>>br[i];

        forn(i,0,n)
        {
            a = ar[i];
            b= br[i];
            fs.insert(pl(pll(-1*a,-1*b),i));
            sn.insert(pl(pll(-1*b,-1*a),i));
        }

        ll ans = 0;

        ll c = 1;
        while(c<=n)
        {
            if(c%2==1)
            {
               auto I = fs.begin();

               pl x, y;

               x = *I;

               y = pl(pll(x.first.second,x.first.first),x.second);
               sn.erase(y);
               fs.erase(x);


            }
            else
            {
                 auto I = sn.begin();

               pl x, y;

               x = *I;

               ans += -1*x.first.first;
               y = pl(pll(x.first.second,x.first.first),x.second);
               fs.erase(y);
               sn.erase(x);
            }
            c++;
        }

        cout<<ans<<el;









    }


    return 0;
}
