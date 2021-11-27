#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,z=1;
        cin>>n>>m;
        ll a,b,c,d;
        for(ll i=0;i<n;i++)
        {
            cin>>a>>b>>c>>d;
            if(b==c) z=0;
        }
        if(z==1) {cout<<"NO"<<endl; continue;}
        if(m%2) {cout<<"NO"<<endl; continue;}
        cout<<"YES"<<endl;
    }
    return 0;
}

