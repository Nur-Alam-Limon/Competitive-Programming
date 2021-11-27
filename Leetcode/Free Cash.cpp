#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=1,ans=0;
    cin>>n;
    vector<pair<ll,ll>>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
        if(i>0)
        {
            if(a[i].first==a[i-1].first && a[i].second==a[i-1].second) cnt++;
            else cnt=1;
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
