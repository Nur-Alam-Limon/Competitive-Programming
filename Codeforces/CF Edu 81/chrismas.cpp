/*
    author: Salam_35
    Created at : 2019/12/22 00:54:01
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
typedef map<ll,ll>mpll;
typedef set<ll>seet;
vec primes;

vector<int>inp[10000];
int visited[1000000];
int ok=true;
int level[10000];
map<int,int>mp;
void bfs(int src)
{
    queue<int>Q;
    Q.push(src);
    visited[src]=1;
    level[src]=0;
    int ma=-1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        int a=0;

        for(int i=0;i<inp[u].size();i++)
        {

            int v=inp[u][i];

            if(inp[v].size()==0)mp[u]++;
            level[v]=level[u]+1;

            if(visited[v]==0 and inp[v].size()>0)
            {
                Q.push(v);
                visited[v]=1;
            }
        }

        if(mp[u]<3)ok=false;

    }
}
int main()
{

    int n;
    cin >>n;
    int p=2;
    for(int i=0;i<n-1;i++)
    {
        int a;
        cin >> a;
        inp[a].push_back(p++);
    }

    bfs(1);
    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}


