#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,y=0,z=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        x=a[0]*a[1]*a[n-1]*a[n-2]*a[n-3];
        y=a[0]*a[1]*a[2]*a[3]*a[n-1];
        z=a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
        cout<<max(x,max(y,z))<<endl;
    }
    return 0;
}

