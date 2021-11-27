#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    for(ll k=0;k<t;k++)
    {
        ll n,m,mid=0,ans=0;
        cin>>n>>m;
        ll a[n+5][m+5];
        vector<ll>b;
        for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
                b.push_back(a[i][j]);
            }
        sort(b.begin(),b.end());
        ll x=b.size();
        if(x%2) mid=(x-1)/2;
        else mid=x/2;
        //cout<<b[mid]<<endl;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++)
            {
                ans=ans+abs(b[mid]-a[i][j]);
                //cout<<ans<<endl;
            }}

        cout<<ans<<endl;
    }
    return 0;
}
