#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll k,sum=0,cnt=0;
    cin>>k;
    ll a[15];
    for(ll i=0;i<12;i++) cin>>a[i];
    sort(a,a+12,greater<ll>());
    for(ll i=0;i<12;i++)
    {
        sum+=a[i];
        cnt++;
        if(sum>=k) break;
    }
    if(k==0) cnt=0;
    if(sum<k) cnt=-1;
    cout<<cnt<<endl;
}
