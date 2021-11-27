#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,ans=0;
    cin>>n;
    while(n--)
    {
        ll x,y,z,cnt=0;
        cin>>x>>y>>z;
        if(x) cnt++;
        if(y) cnt++;
        if(z) cnt++;
        if(cnt>1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
