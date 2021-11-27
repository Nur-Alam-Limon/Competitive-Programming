#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt1=0,ans=0,k=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) {cin>>a[i]; cnt1+=a[i];}
        k=n/2;
        if(cnt1<=k) ans=0;
        else
        {
            if(k%2) k++;
            ans=1;
        }
        cout<<k<<endl;
        for(ll i=0;i<k;i++) cout<<ans<<" ";
        cout<<endl;
    }
    return 0;
}
