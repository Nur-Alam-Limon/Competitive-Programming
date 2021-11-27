#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mi=1e8,ans=0;
        cin>>n;
        ll a[n+5];
        ll b[105]={0};
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
            mi=min(mi,a[i]);
        }
        ans=n-b[mi];
        cout<<ans<<endl;
    }
    return 0;
}
