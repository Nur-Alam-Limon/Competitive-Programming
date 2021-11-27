#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,ans=0,cnt=0,z=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll x=*max_element(a,a+n);
    ll y=*min_element(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(a[i]==x) {ans+=i; break;}
    }
    for(ll i=ans;i<n;i++)
    {
        if(a[i]==y) {z=1; break;}
    }
    for(ll i=n-1;i>=0;i--)
    {
        if(a[i]==y) {ans+=cnt; break;}
        cnt++;
    }
    if(z==0) ans--;
    cout<<ans<<endl;
    return 0;
}
