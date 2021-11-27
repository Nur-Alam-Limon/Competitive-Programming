#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,d,x=0,y=0,p=0,q=0,ans=-1e18;
    cin>>a>>b>>c>>d;
    x=max(a,b);
    y=max(c,d);
    p=min(a,b);
    q=min(c,d);
    ans=max(x*y,ans);
    ans=max(p*q,ans);
    ans=max(x*q,ans);
    ans=max(p*y,ans);
    cout<<ans<<endl;
    return 0;
}

