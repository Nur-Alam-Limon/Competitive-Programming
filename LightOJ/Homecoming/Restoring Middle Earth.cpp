#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        ll n,k,ans=0,x=0;
        cin>>n>>k;
        ll a[n+5],sum[n+5]={0};
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());
        for(ll i=0;i<n;i++)
        {
            if(i==0) sum[i]=a[i];
            else sum[i]=sum[i-1]+a[i];
        }
        cout<<"Case "<<j<<": ";
        if(k>=n) {cout<<sum[n-1]<<endl; continue;}
        x=sum[n-1];
        for(ll i=0;i<n-1;i+=k-1)
        {

            ans+=x;
            x=sum[n-1]-sum[i+k-2];
            //cout<<ans<<endl;
        }
        //for(ll i=n-1;i>n-k;i--) ans+=a[i];
        cout<<ans<<endl;
    }
    return 0;
}


