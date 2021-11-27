#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,z=0,f=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) {cin>>a[i]; if(a[i]==0) z++; else f++;}
    if(z==0) {cout<<-1<<endl; return 0;}
    if(z>0 && f<9) {cout<<0<<endl; return 0;}
    for(ll i=9;i<=f;i+=9) {cout<<555555555;}
    for(ll i=0;i<z;i++) cout<<0;
    cout<<endl;
    return 0;
}
