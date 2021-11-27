#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k=0,flag=0;
        cin>>n;
        ll a[n+5],b[100005],vis[n+5];
        memset(vis,0,sizeof(vis));
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(a[i]!=a[j])
                {
                    if(vis[i] && vis[j]) continue;
                    vis[j]=1;
                    vis[i]=1;
                    b[k]=i+1;
                    b[k+1]=j+1;
                    k+=2;
                }
            }
        }
        for(ll i=1;i<n;i++)
        {
            if(vis[i]==0) {flag=-1; break;}
        }
        if(flag==-1) {cout<<"NO"<<endl; continue;}
        cout<<"YES"<<endl;
        for(ll i=0;i<k-1;i+=2)
        {
            cout<<b[i]<<" "<<b[i+1]<<endl;
        }
    }
    return 0;
}



