#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5],b[n+5],pos[n+5]={0},p[n+5]={0};
        multiset<ll>lcs;
        multiset<ll> ::iterator it;

        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];

        for(ll i=0;i<n;i++) {pos[a[i]]=i;}
        for(ll i=0;i<n;i++) {p[i]=pos[b[i]];}

        for(ll i=0;i<n;i++)
        {
            lcs.insert(p[i]);
            it=lcs.upper_bound(p[i]);
            if(it!=lcs.end()) lcs.erase(it);
        }

        cout<<lcs.size()<<endl;
    }
    return 0;
}
