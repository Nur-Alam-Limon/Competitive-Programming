#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,c=1;
    while(cin>>n)
    {
        if(n==0) break;
        double adj[n+5][n+5];
        memset(adj,0.00,sizeof(adj));
        map<string,ll>m;
        string s;
        for(ll i=0;i<n;i++)
        {
            cin>>s;
            m[s]=i;
        }
        ll x;
        cin>>x;
        while(x--)
        {
            string a,b;
            double y;
            cin>>a>>y>>b;
            ll p=m[a];
            ll q=m[b];
            adj[p][q]=y;
        }
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
        if(cnt) cout<<"Case "<<c<<": Yes"<<endl;
        else cout<<"Case "<<c<<": No"<<endl;
        c++;
    }
}
