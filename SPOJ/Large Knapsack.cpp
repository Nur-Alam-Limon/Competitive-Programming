#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll s,n,x=1,y=0;
    cin>>s>>n;
    ll w[n+5],p[n+5];
    ll t[2][s+5];
    for(ll i=1;i<=n;i++) {cin>>p[i]; cin>>w[i];}
    memset(t,0,sizeof(t));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=s;j++)
        {
            if(j<w[i]) {t[x][j]=t[y][j];}
            else
            {
                t[x][j]=max(t[y][j],p[i]+t[y][j-w[i]]);
            }
        }
        x=1-x;
        y=1-y;
    }
    cout<<t[n%2][s]<<endl;
    return 0;
}
