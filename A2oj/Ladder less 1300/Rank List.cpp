#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool sortbydesc(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
       if(a.first!=b.first) return a.first>b.first;
       return a.second<b.second;
}

int main()
{
    ll n,k,x,y,ans=0;
    cin>>n>>k;
    pair<ll,ll>a[55];
    vector<ll>b;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        a[i]=make_pair(x,y);
    }
    sort(a,a+n,sortbydesc);
    for(ll i=0;i<n;i++)
    {
        if(a[i]==a[k-1]) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
