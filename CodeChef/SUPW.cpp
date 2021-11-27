#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=100000,k=0,ans=0;
    cin>>n;
    ll a[n+5],b[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    if(n<=2) {cout<<0<<endl; return 0;}
    for(ll i=0;i<n;i=i+3)
    {
        for(ll j=i;j<i+3;j++)
        {
            if(j==n) break;
            if(a[j]<x) x=a[j];
        }
        //cout<<x<<endl;
        b[k]=x; k++; x=100000;
    }
    for(ll i=0;i<k;i++)
    {
        ans+=b[i];
    }
    cout<<ans<<endl;
    return 0;
}
