#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q=0,c=1000000;
        cin>>n;
        ll a[n+5];
        map<ll,ll>m;

        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(ll i=1;i<=n;i++)
        {
            if(m[i]>0 && m[i]<c) c=i;
        }
        cout<<c<<endl;
        for(ll i=1;i<n-1;i++)
        {
            if(a[i]==c) q++;
        }
        cout<<q<<endl;
    }
    return 0;
}

