#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll m=1000000007;

ll power(ll a,ll n)
{
    string bin="";
    ll temp;
    while(n>0)
    {
        temp=n%2;
        if(temp==0) bin+='0';
        else bin+='1';
        n=n/2;
    }
    reverse(bin.begin(),bin.end());
    ll res=1;
    for(ll i=0;i<bin.size();i++)
    {
        res=(res*res)%m;
        if(bin[i]=='1') res=(res*a)%m;
    }
    return res%m;
}

int main()
{
    ll n,ans=0,m=1000000007,x=0,y=0;
    cin>>n;
    if(n==0) {cout<<1<<endl; return 0;}
    //if(n==1) {cout<<3<<endl; return 0;}
    ans=power(2,n);
    ans=((ans%m)*((ans-1)%m))%m;
    ans=ans/2;
    x=power(4,n);
    cout<<x-ans<<endl;
    return 0;
}


