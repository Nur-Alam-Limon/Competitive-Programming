#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,ans=0,i=0,j=0,x=0,y=0;
    cin>>n;
    ll a[n+5],b[n+5],dif[n+5]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        dif[i]=a[i]-b[i];
    }
    sort(dif,dif+n);
    for(i=0;i<n-1;i++)
    {
        y=-dif[i];
        if(dif[i]>=0) break;
        x=*lower_bound(dif,dif+n,y);
        ans+=(n-x);
    }
    x=n-i;
    y=(x*(x-1))/2;
    if(ans!=0) ans+=y;
    cout<<ans<<endl;
    return 0;
}

