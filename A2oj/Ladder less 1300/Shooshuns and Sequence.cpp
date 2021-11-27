#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,k,z=0,cnt=0;
    cin>>n>>k;
    ll a[n+5];
    for(ll i=0;i<n;i++) {cin>>a[i]; if(i>=k && a[i-1]!=a[i]) z=1;}
    if(z) {cout<<-1<<endl; return 0;}
    for(ll i=k-2;i>=0;i--)
    {
        if(a[i]==a[k-1]) cnt++;
        else break;
    }
    cout<<k-1-cnt<<endl;
    return 0;
}
