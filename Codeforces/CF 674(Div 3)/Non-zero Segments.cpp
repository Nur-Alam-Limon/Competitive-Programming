#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,sum=0,cnt=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) {cin>>a[i]; sum+=a[i]; if(sum==0) cnt++;}
    ll p=0,q=n-1;
    while(p<=q)
    {
        if(sum-a[p]>=sum-a[q]) {p++; sum-=a[p]; if(sum==0) cnt++;}
        else {sum-=a[q]; q--; if(sum==0) cnt++;}
    }
    cout<<cnt<<endl;
    return 0;
}

