#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,u,r,d,l,flag=0;
        cin>>n>>u>>r>>d>>l;
        while(1){
        if(u==n) {r--; l--; u=u-2;}
        if(d==n) {r--; l--; d=d-2;}
        if(r==n) {u--; d--; r=r-2;}
        if(l==n) {u--; d--; l=l-2;}
        if(u==n-1)
        {
            if(r>=l) r--;
            else l--;
            u--;
        }
        if(d==n-1)
        {
            if(r>=l) r--;
            else l--;
            d--;
        }
        if(r==n-1)
        {
            if(u>=d) u--;
            else d--;
            r--;
        }
        if(l==n-1)
        {
            if(u>=d) u--;
            else d--;
            l--;
        }
        if(u<0 || d<0 || r<0 || l<0) break;
        if(u<n-1 && d<n-1 && r<n-1 && l<n-1) break;
        }
        if(u<0 || d<0 || r<0 || l<0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

