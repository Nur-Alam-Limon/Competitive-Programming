#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,sum=0,ans=0;
    cin>>n;
    ll a[n+5],b[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sum-=a[i];
        sum+=b[i];
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}
