#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=1e18,y=0,p=0,c1=0,c2=0,ans=0;
    cin>>n;
    ll a[n+5],b[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
        p=a[i]+b[i];
        if(p>=y) {y=p; c1=i;}
        if(p<=x) {x=p; c2=i;}
        ans=max(ans,abs(a[c1]-a[c2])+abs(b[c1]-b[c2]));
    }
    for(ll i=0;i<n;i++)
    {
        if(i==c1) continue;
        ans=max(ans,abs(a[c1]-a[i])+abs(b[c1]-b[i]));
    }
    for(ll i=0;i<n;i++)
    {
        if(i==c2) continue;
        ans=max(ans,abs(a[c2]-a[i])+abs(b[c2]-b[i]));
    }
    cout<<ans<<endl;
    return 0;
}

