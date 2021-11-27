#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z,ans=0;
        cin>>x>>y>>z;
        ans=min(x,y);
        ans=x-ans;
        cout<<ans*z<<endl;
    }
    return 0;
}


