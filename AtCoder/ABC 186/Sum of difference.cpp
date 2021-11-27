#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,sum=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(ll i=n-1;i>=0;i--)
    {
        sum+=(i*a[i])-((n-1-i)*a[i]);
    }
    cout<<sum<<endl;
    return 0;
}

