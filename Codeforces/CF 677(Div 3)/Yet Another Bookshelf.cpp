#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,ans=0,z=0,x=0,y=0;
        cin>>n;
        ll a[n+5];
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++)
        {
            if(a[i]) z=1;
            if(z==1 && a[i]==0) cnt++;
        }
        ans=cnt;
        z=0,cnt=0;
        for(ll i=n;i>=1;i--)
        {
            if(a[i]) z=1;
            if(z==1 && a[i]==0) cnt++;
        }
        ans=min(ans,cnt);
        for(ll i=1;i<=n;i++) {if(a[i]) {x=i; break;}}
        for(ll i=n;i>=1;i--) {if(a[i]) {y=i; break;}}
        cnt=0;
        for(ll i=x;i<=y;i++)
        {
            if(a[i]==0) cnt++;
        }
        ans=min(ans,cnt);
        cout<<ans<<endl;
    }
    return 0;
}



