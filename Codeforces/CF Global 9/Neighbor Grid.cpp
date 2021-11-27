#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,z=0;
        cin>>n>>m;
        ll ar[n+5][m+5];
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin>>ar[i][j];
            }
        }
        if(ar[1][1]>2 || ar[1][m]>2 || ar[n][1]>2 || ar[n][m]>2) z=1;
        for(ll i=2;i<m;i++) {if(ar[1][i]>3) z=1;}
        for(ll i=2;i<m;i++) {if(ar[n][i]>3) z=1;}
        for(ll i=2;i<n;i++) {if(ar[i][1]>3) z=1;}
        for(ll i=2;i<n;i++) {if(ar[i][m]>3) z=1;}
        for(ll i=2;i<n;i++)
        {
            if(z==1) break;
            for(ll j=2;j<m;j++)
            {
                if(ar[i][j]>4) {z=1; break;}
            }
        }
        for(ll i=1;i<=n;i++)
        {
            if(z==1) break;
            for(ll j=1;j<=m;j++)
            {
                ar[i][j]=4;
            }
        }
        if(z==0)
        {
        ar[1][1]=2; ar[1][m]=2; ar[n][1]=2; ar[n][m]=2;
        for(ll i=2;i<m;i++) {ar[1][i]=3;}
        for(ll i=2;i<m;i++) {ar[n][i]=3;}
        for(ll i=2;i<n;i++) {ar[i][1]=3;}
        for(ll i=2;i<n;i++) {ar[i][m]=3;}
        }
        if(z==1) {cout<<"NO"<<endl; continue;}
        else cout<<"YES"<<endl;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
