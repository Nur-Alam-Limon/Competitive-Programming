#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll prime[1000];

void seive()
{
    memset(prime,0,sizeof(prime));
    prime[1]=1;
    prime[0]=1;
    for(ll i=4;i<=1000;i+=2) prime[i]=1;

    for(ll i=3;i<=100;i+=2)
        for(ll j=i*i;j<=1000;j+=2*i)
            {prime[j]=1;}

}

int main()
{
    seive();
    ll n,m,x=0;
    cin>>n>>m;
    for(ll i=n+1;i<=m;i++)
    {
        if(prime[i]==0) {x=i; break;}
    }
    if(x==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
