#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll prime[110]={0};

void prim()
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<=100;i+=2) prime[i]=1;
    for(ll i=3;i*i<=100;i+=2)
    {
        if(!prime[i])
        {
            for(ll j=i*i;j<=110;j+=2*i) prime[j]=1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    prim();
    for(ll i=1;i<=t;i++)
    {
        ll a,b,dif=0,flag=0,ans=152;
        cin>>a>>b;
        vector<ll>factor;
        for(ll j=2;j<a;j++)
        {
            if(a%j==0 && prime[j]==0) factor.push_back(j);
        }
        dif=b-a;
        for(ll j=0;j<factor.size();j++)
        {
            cout<<factor[j]<<endl;
            if(dif%factor[j]==0) {flag=1; ans=min(ans,dif/factor[j]); break;}
        }
        if(flag) cout<<"Case "<<i<<": "<<ans<<endl;
        else cout<<"Case "<<i<<": "<<-1<<endl;
    }
    return 0;
}

