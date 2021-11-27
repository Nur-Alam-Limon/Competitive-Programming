#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        if(a[i]==x) continue;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

