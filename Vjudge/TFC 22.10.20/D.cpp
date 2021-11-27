#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0;
    cin>>n;
    ll a[n+5],b[n+5];
    map<ll,ll>c,d;
    for(ll i=0;i<n;i++) {cin>>a[i]; c[a[i]]++;}
    for(ll i=0;i<n;i++) {cin>>b[i]; d[b[i]]++;}
    for(ll i=1;i<=1000;i++)
    {
        cnt+=min(c[i],d[i]);
    }
    if(cnt==n) cout<<cnt-1<<endl;
    else cout<<cnt+1<<endl;
    return 0;
}
