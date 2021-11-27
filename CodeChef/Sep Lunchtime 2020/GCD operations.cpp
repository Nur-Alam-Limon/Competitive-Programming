#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,z=0;
        cin>>n;
        ll a[n+5],b[n+5];
        for(ll i=0;i<n;i++) a[i]=i+1;
        for(ll i=0;i<n;i++) cin>>b[i];
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                ll x=__gcd(a[i],b[i]);
                if(x!=b[i]) z=1;
            }
            if(z==1) break;
        }
        if(z==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

