#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    while(1){
    ll n,x=0,y=0,flag=0,cnt=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1]) {cnt++;}
    }
    if(cnt==0) {cout<<1<<" "<<n<<endl; return 0;}
    if(cnt==n-1) {cout<<1<<" "<<1<<endl; return 0;}
    for(ll i=n-1;i>0;i--)
    {
        if(a[i]<a[i-1]) {x=i; break;}
    }
    for(ll i=x;i>0;i--)
    {
        if(a[i]>a[i-1]) {y=i; break;}
    }
    if(y-1>=0 && a[x]<a[y-1]) flag=1;
    if(x+1<n && a[y]>a[x+1]) flag=1;
    for(ll i=1;i<y;i++)
    {
        if(a[i]<a[i-1]) {flag=1; break;}
    }
    for(ll i=x+2;i<n;i++)
    {
        if(a[i]<a[i-1]) {flag=1; break;}
    }
    if(flag) cout<<"impossible"<<endl;
    else cout<<y+1<<" "<<x+1<<endl;}
    return 0;
}

