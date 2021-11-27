#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[1000009];

int main()
{
    ll n,flag=0,x=0;
    cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]==x) x=0;
        else if(abs(a[i]-x)==1) x=1;
        else {cout<<"NO"<<endl; return 0;}
    }
    if(a[n-1]==x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
