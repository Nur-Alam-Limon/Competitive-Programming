#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,d,n,cnt=0;
    cin>>a>>b>>c>>d>>n;
    ll ar[n+5];
    memset(ar,0,sizeof(ar));
    for(ll i=a;i<=n;i+=a) ar[i]=1;
    for(ll i=b;i<=n;i+=b) ar[i]=1;
    for(ll i=c;i<=n;i+=c) ar[i]=1;
    for(ll i=d;i<=n;i+=d) ar[i]=1;

    for(ll i=1;i<=n;i++)
    {
        if(ar[i]==1) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
