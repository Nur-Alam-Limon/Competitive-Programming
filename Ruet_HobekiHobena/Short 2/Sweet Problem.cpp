#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z,p=0,q=0,r=0,ans=0,a=0;
        cin>>x>>y>>z;
        p=max(x,max(y,z));
        q=min(y,min(y,z));
        r=x+y+z-p-q;
        if(q+r<p) ans=q+r;
        else ans=p;
        a=(q+r-p)/2;
        if(a>0) ans+=a;
        cout<<ans<<endl;
    }
    return 0;
}

