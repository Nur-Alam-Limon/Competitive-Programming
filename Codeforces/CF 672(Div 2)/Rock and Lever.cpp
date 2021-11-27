#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,ans=0;
        cin>>n;
        ll a[n+5],vis[n+5];
        memset(vis,0,sizeof(vis));
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=31;i>=0;i--)
        {
            cnt=0;
            for(ll j=0;j<n;j++)
            {
                if(((1<<i)&a[j])&& !vis[j])
                {
                    cnt++;
                    vis[j]=1;
                }
            }
            ans+=cnt*(cnt-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
