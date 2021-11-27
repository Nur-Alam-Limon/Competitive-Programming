#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) {cin>>a[i]; sum+=a[i];}
        if(sum<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
