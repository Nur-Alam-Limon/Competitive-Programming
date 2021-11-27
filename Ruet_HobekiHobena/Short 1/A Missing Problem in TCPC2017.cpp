#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,sum=0,y=0,ans=0;
        cin>>x;
        ll a[x+5];
        a[0]=0;
        for(ll i=1;i<x;i++)
        {
            cin>>a[i];
            if(a[i]-a[i-1]!=1) ans=a[i]-1;
        }
        if(!ans) ans=x;
        cout<<ans<<endl;
    }
    return 0;
}



