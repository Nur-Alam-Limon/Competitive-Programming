#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,s,ans=0,x=0;
    cin>>n>>s;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    x=(n-1)/2;
    ans=abs(a[x]-s);
    if(a[x]<=s){
    for(ll i=x+1;i<n;i++)
    {
        if(a[i]>=s) break;
        ans+=abs(a[i]-s);
    }
    }
    else
    {
        for(ll i=x-1;i>=0;i--)
        {
            if(a[i]<=s) break;
            ans+=abs(a[i]-s);
        }
    }
    cout<<ans<<endl;
    return 0;
}
