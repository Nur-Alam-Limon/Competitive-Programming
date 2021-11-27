#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0,j=0;
        cin>>n;
        ll a[n+5],b[102];
        memset(b,0,sizeof(b));
        for(ll i=0;i<n;i++) {cin>>a[i]; b[a[i]]++;}
        for(ll i=0;i<=100;i++)
        {
            if(b[i]==0) {ans=i; break;}
            else b[i]--;
        }
        for(ll i=0;i<=100;i++)
        {
            if(b[i]==0) {ans+=i; break;}
            else b[i]--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
