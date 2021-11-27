#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0,x=-1,y=0;
    cin>>n;
    ll ar[n+5],ar1[n+5];
    for(ll i=0;i<n;i++) {cin>>ar[i]; ar1[i]=ar[i];}
    sort(ar1,ar1+n);
    for(ll i=0;i<n;i++)
    {
        if(ar[i]!=ar1[i]) cnt++;
    }
    if(cnt==0) {cout<<"yes"<<endl; cout<<1<<" "<<1<<endl; return 0;}
    cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]!=ar1[n-i-1]) cnt++;
    }
    if(cnt==0) {cout<<"yes"<<endl; cout<<1<<" "<<n<<endl; return 0;}
    cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]!=ar1[i] && x==-1) x=i;
        else if(ar[i]!=ar1[i]) y=i;
    }
    for(ll i=x+1;i<=y;i++)
    {
        if(ar[i]>ar[i-1]) cnt=1;
    }
    if(cnt!=0) {cout<<"no"<<endl; return 0;}
    else {cout<<"yes"<<endl; cout<<x+1<<" "<<y+1<<endl;}
    return 0;
}
