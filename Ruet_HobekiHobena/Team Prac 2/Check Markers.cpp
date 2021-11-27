#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,y=0,suma=0,sumb=0,flag=0;
        cin>>n;
        ll a[n+5],b[n+5];
        for(ll i=0;i<n;i++) {cin>>a[i]; suma+=a[i];}
        for(ll i=0;i<n;i++) {cin>>b[i]; sumb+=b[i];}
        if(n==2)
        {
            if(a[0]>=b[1] || a[1]>=b[0]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0) continue;
            x=sumb-b[i];
            y=suma-a[i];
            if(x-y<=a[i]) flag=1;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
