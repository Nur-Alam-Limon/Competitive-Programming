#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n,m,x,y;
        cin>>n>>m;
        if(n<2) {cout<<"Case #"<<i<<": 0/1"<<endl; continue;}
        x=n*(n-1);
        y=(n+m)*(n+m-1);
        cout<<"Case #"<<i<<": "<<x/gcd(x,y)<<"/"<<y/gcd(x,y)<<endl;
    }
    return 0;
}
