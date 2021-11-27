#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=0;
    cin>>n;
    vector<pair<ll,ll>>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++)
    {
        if(a[i].second>=x) x=a[i].second;
        else x=a[i].first;
    }
    cout<<x<<endl;
    return 0;
}
