#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,z=-1,mx=0,mi=1000000009;
    cin>>n;
    ll a[n+5][4];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][1]>mx) mx=a[i][1];
        if(a[i][0]<mi) mi=a[i][0];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i][1]==mx && a[i][0]==mi) z=i+1;
    }
    cout<<z<<endl;
    return 0;
}
