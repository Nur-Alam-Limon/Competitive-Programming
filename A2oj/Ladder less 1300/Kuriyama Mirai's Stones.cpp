#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,x,y,z,sum=0;
    cin>>n;
    ll a[n+5],b[n+5],c[n+5],d[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        if(i==0) {c[i]=a[i]; continue;}
        c[i]=c[i-1]+a[i];
    }
    sort(b,b+n);
    d[0]=b[0];
    for(ll i=1;i<n;i++)
    {
        d[i]=d[i-1]+b[i];
    }
    cin>>m;
    for(ll j=0;j<m;j++)
    {
        cin>>z>>x>>y;
        if(z==1)
        {
            if(x==1) {sum=c[y-1];}
            else sum=c[y-1]-c[x-2];
        }
        if(z==2)
        {
            if(x==1) {sum=d[y-1];}
            else sum=d[y-1]-d[x-2];
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
