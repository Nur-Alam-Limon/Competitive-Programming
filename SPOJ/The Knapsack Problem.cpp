#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll s,n;
    cin>>s>>n;
    ll w[n+5],p[n+5];
    ll t[n+5][s+5];
    for(ll i=1;i<=n;i++) {cin>>w[i]; cin>>p[i];}
    for(ll i=0;i<=n+1;i++)
        for(ll j=0;j<=s+1;j++)
        {
            t[i][j]=0;
        }
    for(ll i=1;i<=n;i++)
        for(ll j=1;j<=s;j++)
        {
            if(j<w[i]) {t[i][j]=t[i-1][j];}
            else
            {
                t[i][j]=max(t[i-1][j],p[i]+t[i-1][j-w[i]]);
            }
        }
    cout<<t[n][s]<<endl;
    return 0;
}
