#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=0,cnt=0,y=1;
    cin>>n;
    ll a[n+5],c[n+5]={0};
    vector<ll>b[n+5];
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll j=1;j<=n;j++)
    {
        if(c[j]==1) continue;
        x=j;
        b[y].push_back(x);
        for(ll i=1;i<=n;i++)
        {
            c[x]=1;
            x=a[x];
            b[y].push_back(x);
            if(x==j) {cnt++; break;}
        }
        y++;
    }
    cout<<cnt<<endl;
    for(ll i=1;i<y;i++){
        for(ll j=0;j<b[i].size();j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;}
        return 0;
}
