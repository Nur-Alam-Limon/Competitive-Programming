#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0,ans=0,x=1;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        while(a[x]-a[i]<=5 && x<n) x++;
        ans=max(ans,x-i);
    }
    cout<<ans<<endl;
    return 0;
}
