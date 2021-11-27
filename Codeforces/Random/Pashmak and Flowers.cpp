#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=0,y=0,z=0,ans=0,ans1=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ans=a[n-1]-a[0];
    for(ll i=0;i<n;i++) {if(a[i]==a[0]) x++;}
    for(ll i=n-1;i>=0;i--) {if(a[i]==a[n-1]) y++;}
    if(a[0]!=a[n-1]) cout<<ans<<" "<<x*y<<endl;
    else
    {
        for(ll i=1;i<n;i++) ans1+=i;
        cout<<ans<<" "<<ans1<<endl;
    }
    return 0;
}
