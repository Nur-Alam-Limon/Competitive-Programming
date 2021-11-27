#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,ans=-1;
        cin>>n;
        ll a[n+5];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            x=max(x,a[i]);
        }
        a[0]=x+5;
        a[n+1]=x+5;
        for(ll i=1;i<=n;i++)
        {
            if(a[i]==x)
            {
                if(a[i-1]<x || a[i+1]<x) {ans=i; break;}
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}



