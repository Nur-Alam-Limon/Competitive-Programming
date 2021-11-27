#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0,z=0,c=0,x=1;
    ll ans=(ll)1e15;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    while(1)
    {
        cnt=0;
        c++;
        x=1;
        for(ll j=0;j<n;j++,x*=c)
        {
            if(x>=(ll)1e15) {z=1; break;}
            cnt+=abs(x-a[j]);
        }
        if(z==1) break;
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
