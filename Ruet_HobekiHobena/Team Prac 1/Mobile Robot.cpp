#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,d,x=0,y=0,ans=0;
    cin>>n>>d;
    vector<ll>a(n),b(n),c(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    b[0]=a[0];
    c[0]=a[0];
    for(ll i=1;i<n;i++) b[i]=b[i-1]+d;
    for(ll i=1;i<n;i++) c[i]=c[i-1]-d;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>b[i]) x=max(x,a[i]-b[i]);
        else if(a[i]<b[i]) y=max(y,b[i]-a[i]);
    }
    ans=x+y;
    x=0,y=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>c[i]) x=max(x,a[i]-c[i]);
        else if(a[i]<c[i]) y=max(y,c[i]-a[i]);
    }
    ans=min(ans,x+y);
    cout<<ans/2<<"."<<(ans%2 ? "5":"0")<<endl;
    return 0;
}

