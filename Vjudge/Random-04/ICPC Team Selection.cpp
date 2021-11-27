#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,cnt=0,ans=0;
        cin>>n;
        x=n*3;
        ll a[x+5];
        for(ll i=0;i<x;i++) cin>>a[i];
        sort(a,a+x);
        for(ll j=x-2;j>=0;j=j-2)
        {
            ans+=a[j];
            cnt++;
            if(cnt==n) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
