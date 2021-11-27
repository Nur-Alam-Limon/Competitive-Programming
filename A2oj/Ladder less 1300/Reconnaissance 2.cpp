#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m=100000,x=0,y=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])<m)
        {
            m=abs(a[i]-a[i+1]);
            x=i; y=i+1;
        }
    }
    if(abs(a[n-1]-a[0])<m)
    {
        m=abs(a[n-1]-a[0]);
        x=n-1; y=0;
    }
    cout<<x+1<<" "<<y+1<<endl;
    return 0;
}
