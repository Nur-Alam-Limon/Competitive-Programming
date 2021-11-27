#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,mx=0,mi=0,p=0;
    cin>>n>>m;
    ll a[m+5],b[m+5];
    for(ll i=0;i<m;i++) {cin>>a[i]; b[i]=a[i];}
    sort(a,a+m,greater<int>());
    for(ll i=0;i<n;i++)
    {
        mx+=a[0];
        a[0]=a[0]-1;
        sort(a,a+m,greater<int>());
    }
    sort(b,b+m);
    for(ll i=0;i<n;i++)
    {
        mi+=b[p];
        b[p]=b[p]-1;
        if(!b[p]) p++;
        sort(b,b+m);
    }
    cout<<mx<<" "<<mi<<endl;
    return 0;
}
