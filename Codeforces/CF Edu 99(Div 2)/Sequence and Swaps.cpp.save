#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,cnt=0,z=0,y=0,p=0;
        cin>>n>>x;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            p=0;
            for(ll i=1;i<n;i++)
            {
                if(a[i]<a[i-1]) {p=1; break;}
            }
            if(!p) break;
            if(a[i]>x) {y=x; x=a[i]; a[i]=y; cnt++;}
        }
        for(ll i=1;i<n;i++)
        {
            if(a[i]<a[i-1]) {z=-1; break;}
        }
        if(z==-1) cout<<z<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}




