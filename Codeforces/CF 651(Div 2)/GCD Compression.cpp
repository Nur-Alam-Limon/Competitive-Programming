#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,tar=0,p=0,j=0,cnt=0;
        cin>>n;
        tar=(n-1)*2;
        n=n*2;
        ll a[n+5],b[n+5];
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++)
        {
            if(a[i]%2==0) {b[j]=i; j++;}
        }
        p=j;
        for(ll i=1;i<=n;i++)
        {
            if(a[i]%2==1) {b[j]=i; j++;}
        }
        for(ll i=1;i<p;i=i+2)
        {
            if(cnt>=tar) break;
            cout<<b[i-1]<<" "<<b[i]<<endl;
            cnt+=2;
        }

        for(ll i=p+1;i<n;i=i+2)
        {
            if(cnt>=tar) break;
            cout<<b[i-1]<<" "<<b[i]<<endl;
            cnt+=2;
        }
    }
    return 0;
}
