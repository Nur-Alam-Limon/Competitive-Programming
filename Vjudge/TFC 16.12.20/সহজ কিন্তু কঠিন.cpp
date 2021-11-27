#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mx=0,ans=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        ll div[mx+5]={0};
        for(ll i=0;i<n;i++)
            for(ll j=1;j<=sqrt(a[i]);j++)
            {
                if(a[i]%j==0)
                {
                    div[j]++;
                    if(j!=a[i]/j) {div[a[i]/j]++;}
                }
            }
        for(ll i=high;i>0;i--)
        {
            if(div[i]>1) {ans=i; break;}
        }
        cout<<ans<<endl;
    }
    return 0;
}

