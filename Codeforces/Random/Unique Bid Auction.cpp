#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s=1000000,q=0;
        cin>>n;
        ll a[n+5],m[n+5],p[n+5];
        memset(m,0,sizeof(m));
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
            p[a[i]]=i+1;
        }
        for(ll i=1;i<=n;i++)
        {
            if(m[i]==1) {cout<<p[i]<<endl; q=1; break;}
        }
        if(!q) cout<<-1<<endl;
    }
    return 0;
}
