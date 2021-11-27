#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n+5],b[n+5];
    for(ll i=0;i<n;i++) {cin>>a[i]; b[i]=a[i];}
    sort(b,b+n);
    if(b[0]==b[1]) {cout<<"Still Rozdil"<<endl; return 0;}
    for(ll i=0;i<n;i++)
    {
        if(a[i]==b[0]) {cout<<i+1<<endl; break;}
    }
    return 0;
}
