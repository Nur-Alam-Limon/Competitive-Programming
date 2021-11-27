#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,sum=0;
    cin>>n>>m;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<m;i++)
    {
        if(a[i]<0) sum+=(-a[i]);
    }
    cout<<sum<<endl;
    return 0;
}
