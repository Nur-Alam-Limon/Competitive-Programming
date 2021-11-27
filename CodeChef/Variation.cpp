#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,k,cnt=0;
    cin>>n>>k;
    ll ar[n+5];
    for(ll i=0;i<n;i++) {cin>>ar[i];}
    sort(ar,ar+n);
    for(ll i=0;i<n-1;i++)
        for(ll j=i+1;j<n;j++)
        {
            if(ar[j]-ar[i]>=k) {cnt+=n-j; break;}
        }
    cout<<cnt<<endl;
    return 0;
}
