#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll d[1000005]={0};

int main()
{
    ll a,b,c,n=0,ans=0,m=1073741824;
    cin>>a>>b>>c;
    for(ll i=1;i<=1000001;i++)
    {
        for(ll j=i;j<=1000001;j+=i)
            d[j]++;
    }
    for(ll i=1;i<=a;i++)
    {
        for(ll j=1;j<=b;j++)
        {
            for(ll k=1;k<=c;k++)
            {
                n=i*j*k;
                ans+=d[n];
                ans=ans%m;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
