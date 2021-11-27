#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans=INT_MAX;
        cin>>n>>k;
        for(ll i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i<=k) ans=min(ans,n/i);
                if(n/i<=k) ans=min(ans,i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
