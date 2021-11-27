#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll s,n,sum=0,z=0;
    cin>>s>>n;
    sum=s;
    vector<pair<ll,ll>>x;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        x.push_back(make_pair(a,b));
    }
    sort(x.begin(),x.end());
    for(ll i=0;i<n;i++)
    {
        //cout<<x[i].first<<" "<<x[i].second<<endl;
        if(x[i].first>=sum) {z=1; break;}
        else sum+=x[i].second;
    }
    if(z) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
