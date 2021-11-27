#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,k,mod=0,z=0,ans=0,x=0,mid=0,l=0;
    cin>>n>>m>>k;
    ll a[n+5][m+5],b[n*m+5];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++) {cin>>a[i][j]; b[l]=a[i][j]; l++;}
    sort(b,b+l);
    if((l-1)%2==0) mid=b[(l-1)/2];
    else mid=b[((l-1)/2)+1];
    mod=a[0][0]%k;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]%k!=mod) z=1;
        }
        if(z) break;
    }
    if(z) {cout<<-1<<endl; return 0;}
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            x=abs(a[i][j]-mid);
            x=x/k;
            ans+=x;
        }
    }
    cout<<ans<<endl;
    return 0;
}
