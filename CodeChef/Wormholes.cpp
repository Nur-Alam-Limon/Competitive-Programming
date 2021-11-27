#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll bin1(ll a,ll x,ll b1[])
{
    ll i=0,e=x-1;
    ll mid=0;
    while(i<=e)
    {
        mid=i+(e-i)/2;
        if(b1[mid]<=a && b1[mid+1]>a) {return b1[mid];}
        if(b1[mid]<a) {i=mid+1;}
        else e=mid-1;
    }
    return -1;
}

ll bin2(ll b,ll y,ll b2[])
{
    ll i=0,e=y-1;
    ll mid=0;
    while(i<=e)
    {
        mid=i+(e-i)/2;
        if(b2[mid]>=b && b2[mid-1]<b) {return b2[mid];}
        else if(b2[mid]<b) {i=mid+1;}
        else e=mid-1;
    }
    return -1;
}

int main()
{
    ll n,x,y,a=0,b=0,sum=INT_MAX,q=0,w=0;
    cin>>n>>x>>y;
    ll a1[n+5],a2[n+5],b1[x+5],b2[y+5];
    for(ll i=0;i<n;i++) {cin>>a1[i]>>a2[i];}
    for(ll i=0;i<x;i++) {cin>>b1[i];}
    for(ll i=0;i<y;i++) {cin>>b2[i];}
    sort(b1,b1+x);
    sort(b2,b2+y);
    for(ll i=0;i<n;i++)
    {
        ll r=0;
        a=bin1(a1[i],x,b1);
        b=bin2(a2[i],y,b2);
        if(a==-1)
        {
            if(b1[x-1]<=a1[i]) a=b1[x-1];
            else {a=0; q=1;}
        }
        if(b==-1)
        {
            if(b2[0]>=a2[i]) b=b2[0];
            else {b=a2[i]; w=1;}
        }
        if(q==0 && w==0)
        {
            r=abs(b-a+1);
            if(r<sum) sum=r;
        }
        q=0,w=0;
    }
    cout<<sum<<endl;
    return 0;
}

