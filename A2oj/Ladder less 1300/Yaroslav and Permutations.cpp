#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,z=0;
    cin>>n;
    ll a[n+5],b[100000]={0};
    for(ll i=0;i<n;i++) {cin>>a[i]; b[a[i]]++; if(b[a[i]]>z) z=b[a[i]];}
    if(z<=((n+1)/2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
