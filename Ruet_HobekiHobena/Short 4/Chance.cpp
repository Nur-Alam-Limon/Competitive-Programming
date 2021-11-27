#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll prime[100005]={0};
ll ar[100005]={0};

void primecal()
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<100001;i+=2) prime[i]=1;
    for(ll i=3;i*i<=100000;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=100000;j+=i) prime[j]=1;
        }
    }
}

int main()
{
    ll t,cnt=0,z=0;
    primecal();
    cin>>t;
    for(ll i=0;i<=100000;i++)
    {
        z=__builtin_popcount(i);
        if(prime[z]==0) cnt++;
        ar[i]=cnt;
    }
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<ar[y]-ar[x-1]<<endl;
    }
    return 0;
}

