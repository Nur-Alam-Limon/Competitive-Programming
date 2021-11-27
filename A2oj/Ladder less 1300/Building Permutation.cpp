#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0,z=1;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        cnt+=abs(z-a[i]);
        z++;
    }
    cout<<cnt<<endl;
    return 0;
}
