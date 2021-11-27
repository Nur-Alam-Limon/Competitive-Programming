#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,ans=0,cnt=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    cin>>m;
    ll b[m+5];
    for(ll i=0;i<m;i++) cin>>b[i];
    for(ll i=m-1;i>=0;i--)
    {
        for(ll j=0;j<n;j++)
        {
            if(b[i]%a[j]==0 && b[i]/a[j]>ans) ans=b[i]/a[j];
        }
    }
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(b[i]/a[j]==ans && b[i]%a[j]==0) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
