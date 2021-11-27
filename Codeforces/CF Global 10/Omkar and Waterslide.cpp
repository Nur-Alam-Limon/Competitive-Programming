#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,x=0,y=0,z=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=n-1;i>0;i--)
        {
            if(a[i]<a[i-1]) {cnt++; x=i; break;}
        }
        if(cnt==0) {cout<<0<<endl; continue;}
        cnt=0;
        y=*max_element(a,a+x+1);
        for(ll i=n-1;i>0;i--)
        {
            if(a[i]<a[i-1]) {cnt+=a[i-1]-a[i];}
        }
        cout<<cnt<<endl;
    }
    return 0;
}

