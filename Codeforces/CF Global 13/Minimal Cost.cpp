#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,u,v,ans=0,z=0,cnt1=0,cnt2=0;
        cin>>n>>u>>v;
        ll a[n+5];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0) continue;
            z=abs(a[i]-a[i-1]);
            if(z==1) cnt1++;
            else if(z>1) cnt2++;
        }
        if(cnt2>0) ans=0;
        else if(cnt1==0) ans=u+v;
        else ans=min(u,v);
        cout<<ans<<endl;
    }
    return 0;
}

