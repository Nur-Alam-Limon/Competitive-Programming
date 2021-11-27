#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1.0)

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,gar=0;
        double h[105]={0};
        double mxh1=0,mxh2=0,w1=0,w2=0;
        double w,s,x=0,y=0,ans=0,time=0;
        cin>>n>>w>>s;
        for(ll i=0;i<n;i++)
        {
            cin>>h[i];
            if(h[i]==0) gar=i;
        }
        for(ll i=0;i<gar;i++)
        {
            mxh1=h[i];
            w1=(gar-i)*(w+s);
            x=max(x,atan(h[i]/w1));
        }
        for(ll i=gar+1;i<n;i++)
        {
            mxh2=h[i];
            w2=(i-gar)*(w+s);
            y=max(y,atan(h[i]/w2));
        }
        ans=pi-x-y;
        time=(16*60)/pi;
        cout<<fixed<<setprecision(10)<<ans*time<<endl;
    }
    return 0;
}
