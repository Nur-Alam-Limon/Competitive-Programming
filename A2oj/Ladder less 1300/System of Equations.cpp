#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,cnt=0;
    cin>>n>>m;
    for(ll i=0;i<=1000;i++)
    {
        ll x=n-i*i;
        if(x<0) break;
        if(i*i+x==n && i+x*x==m) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
