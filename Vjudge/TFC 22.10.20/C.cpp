#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,ans=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=31;i>=0;i--)
    {
        vector<ll>x,y;
        for(ll j=0;j<n;j++)
        {
            if(a[j]&(1<<i)) x.push_back(a[j]);
            else y.push_back(a[j]);
        }
        if(x.size()==0 || y.size()==0) continue;
        ans=x[0]^y[0];
        for(ll k=0;k<x.size();k++)
            for(ll m=0;m<y.size();m++)
            {
                ans=min(ans,x[k]^y[m]);
            }
        cout<<ans<<endl;
        return 0;
    }
    cout<<0<<endl;
    return 0;
}

