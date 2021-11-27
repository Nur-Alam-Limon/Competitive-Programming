#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod(ll a,ll b,ll c)
{
    string s="";
    ll ans=1;
    while(b>0)
    {
        ll x=b%2;
        if(x==0) s+="0";
        else s+="1";
        b=b/2;
    }
    reverse(s.begin(),s.end());

    for(ll i=0;i<s.size();i++)
    {
        ans=(ans*ans);
        if(s[i]=='1') ans=(ans*a);
    }
    return c%ans;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    if(n>=27) {cout<<m<<endl; return 0;}
    cout<<mod(2,n,m)<<endl;
    return 0;
}
