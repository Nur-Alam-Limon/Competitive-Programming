#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    while(cin>>n)
    {
        double adj[n+5][n+5];
        memset(adj,1.00,sizeof(adj));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++)
            {
                if(i==j) continue;
                double a;
                cin>>a;
                adj[i][j]=a;
            }}
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                for(ll k=0;k<n;k++)
                {
                    adj[j][k]=max(adj[j][k],adj[j][i]*adj[i][k]);
                }}}
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(adj[i][i]>1.00) {cnt=1; break;}
        }
        if(cnt==0) {cout<<"no arbitrage sequence exists"<<endl; continue;}

    }
    return 0;
}

