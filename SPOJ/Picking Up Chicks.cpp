#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t,j=0;
    cin>>t;
    while(t--)
    {
        j++;
        ll a,b,c,d,cnt=0,k=0,ans=0,p=0;
        cin>>a>>b>>c>>d;
        ll x[a+5],y[a+5];
        for(ll i=0;i<a;i++) cin>>x[i];
        for(ll i=0;i<a;i++) cin>>y[i];
        for(ll i=a-1;i>=0;i--)
        {
            if((y[i]*d+x[i])>=c) cnt++;
        }
        if(cnt<b) {cout<<"Case #"<<j<<": IMPOSSIBLE"<<endl; continue;}
        cnt=0;
        for(ll i=a-1;i>=0;i--)
        {
            if((y[i]*d+x[i])>=c) cnt++;
            else break;
        }
        if(cnt>=b) {cout<<"Case #"<<j<<": 0"<<endl; continue;}
        if(b==0) {cout<<"Case #"<<j<<": 0"<<endl; continue;}
        cnt=0;
        for(ll i=a-1;i>=0;i--)
        {
            if((y[i]*d+x[i])>=c) {cnt++; ans+=k;}
            else k++;
            if(cnt==b) break;
        }
        cout<<"Case #"<<j<<": "<<ans<<endl;
    }
    return 0;
}
