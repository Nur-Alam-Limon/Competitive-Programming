#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,p=0,sum=0,x=2,sum1=0,ans=0;
    cin>>n;
    ll a[n+5],b[n+5];
    b[0]=0;
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++) {cin>>p; b[i]=b[i-1]+p;}
    sum=b[n-1]-b[1]+a[1]+a[n];
    for(ll i=0;i<n;i++)
    {
        if(x>n) break;
        sum1=b[n]-b[x]+b[x-2]+a[x]+a[x-1];
        if(sum1>sum) {sum=sum1;}
        sum1=0;
        x++;
    }
    for(ll i=1;i<=n;i++) {ans=max(a[i],sum);}
    for(ll i=1;i<=n;i++) {ans=max(b[i],sum);}
    cout<<sum<<endl;
    return 0;
}
