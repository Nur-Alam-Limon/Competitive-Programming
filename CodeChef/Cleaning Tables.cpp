#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,cnt=0,cnt1=0,cnt2=0;
        cin>>n>>m;
        ll a[500],b[n+5];
        for(ll i=0;i<m;i++) {cin>>b[i]; a[b[i]]++;}
        for(ll i=0;i<n;i++)
        {
            if(a[b[i]]>1) cnt2++;
        }
        for(ll i=0;i<450;i++)
        {
            if(a[i]>0) cnt++;
            if(a[i]>=2) cnt1++;
        }
        if(cnt1==n) cnt+=1;
        else if(cnt1>n) cnt+=1+cnt1-n;
        cout<<cnt<<endl;
    }
    return 0;
}
