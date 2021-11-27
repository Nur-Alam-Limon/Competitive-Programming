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
        for(ll i=1;i<=n;i++) {cin>>a[i]; sum+=a[i];}
        ll t[100005];
        memset(t,0,sizeof(t));
        for(ll i=1;i<=n;i++)
            for(ll j=sum/2;j>0;j--)
            {
                if(j>=a[i]) t[j]=max(t[j],a[i]+t[j-a[i]]);
            }
        cout<<sum-2*t[sum/2]<<endl;
    }
    return 0;
}
