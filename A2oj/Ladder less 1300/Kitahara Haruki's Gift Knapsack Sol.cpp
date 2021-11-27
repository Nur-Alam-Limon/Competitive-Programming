#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,sum=0;
    cin>>n;
    ll a[n+5],t[100000];
    memset(t,0,sizeof(t));
    for(ll i=1;i<=n;i++) {cin>>a[i]; sum+=a[i];}
    for(ll i=1;i<=n;i++)
        for(ll j=sum/2;j>0;j--)
        {
            if(j>=a[i]) t[j]=max(t[j],a[i]+t[j-a[i]]);
        }
    if(sum-2*t[sum/2]==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
