#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,dif=1e18;
    cin>>n>>m;
    ll a[m+5];
    for(ll i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    for(ll i=0;i<=m-n;i++)
    {
        dif=min(dif,a[i+n-1]-a[i]);
    }
    cout<<dif<<endl;
    return 0;
}
