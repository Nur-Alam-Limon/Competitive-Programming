#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll prime[1000006]={0};

void seive()
{
    prime[0]=1;
    prime[1]=1;
    for(ll i=4;i*i<=1000000;i+=2)
    {
        prime[i]=1;
    }
    for(ll i=3;i*i<=1000000;i+=2)
    {
        for(ll j=i*i;j<=1000000;j=j+i)
        {
            prime[j]=1;
        }
    }
}

int main()
{
    ll n;
    cin>>n;
    seive();
    while(n--)
    {
        ll x,z=0,y=0;
        cin>>x;
        if(x==4) {cout<<"YES"<<endl; continue;}
        if(x%2==0) {cout<<"NO"<<endl; continue;}
        y=sqrt(x);
        if(y*y!=x) {cout<<"NO"<<endl; continue;}
        if(prime[y]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
