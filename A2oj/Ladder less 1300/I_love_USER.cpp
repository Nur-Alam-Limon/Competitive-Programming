#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=0,y=0,cnt=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    x=a[0];
    y=a[0];
    for(ll i=1;i<n;i++)
    {
        if(a[i]>x) {x=a[i]; cnt++;}
        if(a[i]<y) {y=a[i]; cnt++;}
    }
    cout<<cnt<<endl;
    return 0;
}
