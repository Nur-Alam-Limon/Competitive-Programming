#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll m=1000000007;

int main()
{
    ll n,ans=1,x=0;
    cin>>n;
    ll a[n+5];
    map<ll,ll>pos;
    for(ll i=0;i<n;i++) {cin>>a[i]; pos[a[i]]++;}
    x=a[0];
    for(ll i=1;i<n;i++)
    {
        if(a[i]>x) {x=a[i];}
        else ans++;
    }
    cout<<ans%m<<endl;
    return 0;
}


