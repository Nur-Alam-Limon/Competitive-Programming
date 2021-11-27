#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,sum=0;
        cin>>n>>k;
        ll a[n+5],b[n+5];
        for(ll i=0;i<n;i++) {cin>>a[i]; b[i]=a[i];}
        sort(b,b+n);
        for(ll i=1;i<n;i++)
        {
            sum+=(k-b[i])/b[0];
        }
        cout<<sum<<endl;
    }
    return 0;
}
