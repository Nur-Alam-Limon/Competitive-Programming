#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum1=0,sum2=0,z=0;
        cin>>n;
        ll a[n+5],b[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
            if(i==n-1) {b[z]=a[i]; break;}
            if(a[i]!=a[i+1]) {b[z]=a[i]; z++;}
        }
        for(ll i=0;i<=z;i++)
        {
            if(b[i]<0) sum2+=b[i];
            else sum1+=b[i];
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
    return 0;
}
