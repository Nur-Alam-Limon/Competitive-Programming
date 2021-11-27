#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    for(ll j=0;j<t;j++)
    {
        ll n,p,q,z=0;
        cin>>n>>p>>q;
        ll a[p+5],b[q+5],index[62502],ans[62502];
        for(ll i=0;i<=62500;i++) {index[i]=-1;}
        for(ll i=0;i<=p;i++) {cin>>a[i]; index[a[i]]=i;}
        for(ll i=0;i<=q;i++)
        {
            cin>>b[i];
            if(index[b[i]]==-1) continue;
            else
            {
                ans[z]=index[b[i]];
                z++;
            }
        }

        multiset<ll>pq;
        multiset<ll> ::iterator it;

        for(ll i=0;i<z;i++)
        {
            pq.insert(ans[i]);
            it=pq.upper_bound(ans[i]);
            if(it!=pq.end()) pq.erase(it);
        }
        cout<<"Case "<<j+1<<": "<<pq.size()<<endl;
    }
    return 0;
}
