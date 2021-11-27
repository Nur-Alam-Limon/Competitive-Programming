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
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            if(a[i]>0) sum+=a[i];
            if(a[i]<0)
            {
                ll x=min(sum,-a[i]);
                a[i]+=x;
                sum-=x;
            }
        }
        sum=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]<0) sum+=(-a[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
