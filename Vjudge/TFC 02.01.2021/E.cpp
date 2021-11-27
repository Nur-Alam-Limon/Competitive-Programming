#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[1000007];

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,k,g=0,j=0;
        cin>>x>>y>>k;
        memset(a,0,sizeof(a));
        g=__gcd(x,y);
        for(ll i=1;i*i<=g;i++)
        {
            if(g%i==0)
            {
                a[j++]=i;
                if(i*i!=g) a[j++]=g/i;
            }
        }
        sort(a,a+j);
        if(k>j) cout<<-1<<endl;
        else cout<<a[j-k]<<endl;
    }
    return 0;
}

