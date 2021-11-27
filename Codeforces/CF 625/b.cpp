#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define FIO ios_base::sync_with_stdio(NULL);cin.tie(NULL)
#define MAX 500005

map<ll,ll> mp;

int main()
{
    FIO;

    ll n;
    cin >> n;

    vector<ll> v(n), b(n);

    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        b[i]=v[i];
        v[i]-=(i+1);
    }

    for(int i=0;i<n;i++)
    {
        mp[v[i]]+=b[i];
    }

    ll ans=0;
    for(pair<ll,ll> p: mp) ans= max(ans,p.second);

    cout << ans << endl;

    return 0;
}

