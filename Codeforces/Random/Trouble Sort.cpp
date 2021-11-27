#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,z=0,cnt1=0,cnt2=0;
        cin>>n;
        ll a[n+5],b[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) {cin>>b[i]; if(b[i]==0) cnt1++; else cnt2++;}

        for(ll i=1;i<n;i++)
        {
            if(a[i]<a[i-1]) z=1;
        }
        if(z==0) {cout<<"Yes"<<endl; continue;}
        if(cnt1!=0 && cnt2!=0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
