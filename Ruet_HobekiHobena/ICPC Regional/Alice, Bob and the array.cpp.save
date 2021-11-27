//RUET_HobeKiHobena

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll t;
    cin>>t;
    for(ll k=1;k<=t;k++)
    {
        ll n,sum=0,cnt=0,x=0,cnt0=0,neg=-1000009;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0) cnt0++;
            if(a[i]<0) neg=max(neg,a[i]);
            if(a[i]>0) {sum+=a[i]; x=1;}
            else if(a[i]<0 && x==1) {cnt++; x=0;}
        }
        if(a[n-1]<=0) cnt--;
        if(cnt<0) cnt=0;
        if(sum==0 && cnt0==0) sum=neg;
        cout<<"Case "<<k<<": "<<sum<<" "<<cnt<<endl;
    }
    return 0;
}


