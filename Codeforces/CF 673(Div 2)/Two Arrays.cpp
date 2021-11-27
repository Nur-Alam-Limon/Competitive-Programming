#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,t;
        cin>>n>>t;
        ll a[n+5];
        map<ll,ll>map_c;
        map<ll,ll>map_d;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            if(map_c[t-a[i]]<=map_d[t-a[i]]) map_c[a[i]]++;
            else map_d[a[i]]++;
        }
        for(ll i=0;i<n;i++)
        {
            if(map_c[a[i]]>0) {map_c[a[i]]--; a[i]=1;}
            else {map_d[a[i]]--; a[i]=0;}
        }
        for(ll i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}

