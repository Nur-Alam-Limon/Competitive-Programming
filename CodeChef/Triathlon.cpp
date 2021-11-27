#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll ar[n+5],sum[n+5],x[n+5],y[n+5];
    ll ans=0,p=0;
    for(ll i=0;i<n;i++) {cin>>ar[i]; cin>>x[i]>>y[i]; sum[i]=x[i]+y[i];}
    sort(sum,sum+n);
    ans=sum[0];
    p=sum[n-1];
    for(ll i=0;i<n;i++)
    {
        ans+=ar[i];
    }
    for(ll i=0;i<n;i++)
    {
        if((x[i]+y[i])==p) p+=ar[i];
    }
    cout<<max(ans,p)<<endl;
    return 0;
}
