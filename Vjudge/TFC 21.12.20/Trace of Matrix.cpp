#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0,x=0;
        cin>>n;
        ll a[n+5][n+5];
        for(ll i=0;i<n;i++)
            for(ll j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                x=0;
                for(ll k=0;k<n;k++)
                {
                    if(i+k<n && j+k<n) {x+=a[i+k][j+k];}
                    else break;
                }
                ans=max(ans,x);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}

