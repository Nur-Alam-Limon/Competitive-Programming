#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0,cal=0,ans=0,flag=0,x=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) {cin>>a[i]; sum+=a[i];}
        for(ll i=n;i>0;i--)
        {
            flag=0,cal=0;
            if(sum%i!=0) continue;
            x=sum/i;
            for(ll j=0;j<n;j++)
            {
                cal+=a[j];
                if(cal==x) cal=0;
                if(cal>x) {flag=1; break;}
            }
            if(flag==0) {ans=i; break;}
        }
        cout<<ans<<endl;
    }
    return 0;
}
