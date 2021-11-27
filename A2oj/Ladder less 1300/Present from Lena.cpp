#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    for(ll i=0;i<=n;i++)
    {
        for(ll j=i;j<n;j++) cout<<"  ";
        for(ll j=0;j<i;j++) cout<<j<<" ";
        for(ll j=i;j>0;j--) cout<<j<<" ";
        cout<<0<<endl;
    }
    for(ll i=n-1;i>=0;i--)
    {
        for(ll j=i;j<n;j++) cout<<"  ";
        for(ll j=0;j<i;j++) cout<<j<<" ";
        for(ll j=i;j>0;j--) cout<<j<<" ";
        cout<<0<<endl;
    }
}
