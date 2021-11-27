#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a[8],b[8],ans=0,y=36;
    for(ll i=0;i<6;i++) cin>>a[i];
    for(ll i=0;i<6;i++) cin>>b[i];
    sort(a,a+6);
    sort(b,b+6);
    for(ll i=0;i<6;i++)
        for(ll j=0;j<6;j++)
        {
            if(a[i]>b[j]) ans++;
        }
    ll x=__gcd(ans,y);
    cout<<ans/x<<"/"<<36/x<<endl;
    return 0;
}

