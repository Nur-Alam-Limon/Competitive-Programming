#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        ll f[n+5];
        memset(f,0,sizeof(f));
        for(ll i=1;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            f[y]++;
        }
        for(ll i=1;i<=n;i++)
        {
            if(f[i]>1) cnt+=f[i]-1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
