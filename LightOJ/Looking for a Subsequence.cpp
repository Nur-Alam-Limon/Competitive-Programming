#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,p=0,s=0;
        cin>>n>>q;
        ll a[n+5],b[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];

        set<int>lis;
        set<int> :: iterator it;

        for(ll i=0;i<n;i++)
        {
            lis.insert(a[i]);
            it=lis.find(a[i]);
            it++;
            if(it!=lis.end()) lis.erase(it);
            else {b[p]=a[i]; p++;}
        }
        for(it=lis.begin();it!=lis.end();it++) cout<<*it<<" ";
        cout<<endl;

        s=lis.size();
        cout<<s<<endl;
        for(ll i=0;i<p;i++) cout<<b[i]<<" ";
    }
}
