#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,sum=0,x;
    cin>>n>>m;
    ll a[n+5],c[n+5];
    ll b[100005];
    memset(b,0,sizeof(b));
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=n-1;i>=0;i--)
    {
        if(b[a[i]]==0) {sum++; b[a[i]]=1;}
        c[i]=sum;
    }
    for(ll i=0;i<m;i++)
    {
        cin>>x;
        cout<<c[x-1]<<endl;
    }
    return 0;
}
