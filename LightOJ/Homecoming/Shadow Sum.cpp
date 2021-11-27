#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        ll n,sum=0;
        cin>>n;
        ll a[n+5];
        map<ll,ll>p;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]>=0)
            {
                if(p[a[i]]==0) sum+=a[i];
                p[a[i]]++;
            }
            else if(a[i]<0)
            {
                if(p[-a[i]]==0) sum+=a[i];
                p[-a[i]]++;
            }
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}


