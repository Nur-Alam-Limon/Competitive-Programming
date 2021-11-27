#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5],cnt=0,x=0;
        x=(n*(n-1)/2)-1;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]<=a[i]) cnt++;
        }
        if(cnt==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
