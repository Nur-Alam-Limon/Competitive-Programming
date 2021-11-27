#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,n,ans=0,k=0;
    cin>>n>>a>>b>>c;
    for(ll i=0;i*a<=n;i++)
        for(ll j=0;a*i+b*j<=n;j++)
        {
            k=(n-a*i-b*j)/c;
            if((a*i+b*j+c*k)==n && i+j+k>ans) ans=i+j+k;
        }

    cout<<ans<<endl;
    return 0;
}
