/*
    author: Salam_35
    problem name:
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define sc(n) scanf("%d",&n)
#define Max 100005
#define scan(n) scanf("%lld",&n)
#define pi acos(-1.0)
#define _fastio  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ALL(x) x.begin(),x.end()
#define sci(n) scanf("%d",&n);
#define scl(n) scanf("%lld",&n);
#define load(array,size)  for(ll i=0 ; i<size ; i++) cin>>array[i] ;
#define load1(array,size)  for(ll i=1 ; i<=size ; i++) cin>>array[i] ;
#define INF	1LL<<19
#define pll pair<ll,ll>
#define mst(arr,value) memset(arr,value,sizeof(arr));

const ll MOD = 1e9+7;

typedef vector<ll>vec;
typedef pair<ll,ll> pii;
typedef map<int,int>mpll;
typedef set<ll>seet;
mpll cnt;
vec v;
int ans[3][3];
int inp[3][3];
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int a;
            cin >> a;
            inp[i][j]+=(a%2);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(inp[i][j])
            {
                for(int k=i;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        ans[k][l]=(ans[k][l]+1)%2;
                    }
                }
                for(int k=i;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        ans[l][k]=(ans[l][k]+1)%2;
                    }
                }
            }
        }
        cout<<endl;
    }


}

