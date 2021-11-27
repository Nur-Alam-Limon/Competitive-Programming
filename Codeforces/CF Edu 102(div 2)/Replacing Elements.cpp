#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[n-1]<=d) {cout<<"YES"<<endl; continue;}
        else if(a[0]+a[1]<=d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
