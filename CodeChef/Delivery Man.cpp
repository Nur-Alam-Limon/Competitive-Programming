#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x,y,sum=0,z=0,a1=0,b1=0;
    cin>>n>>x>>y;
    vector<ll>a(n+2),b(n);
    vector< pair<ll,ll>>d(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++)
    {
        d[i].first=abs(a[i]-b[i]);
        d[i].second=i;
    }
    sort(d.begin(),d.end());
    for(ll i=n-1;i>=0;i--)
    {
        z=d[i].second;
        if(a1>=x) {sum+=b[z];}
        else if(b1>=y) {sum+=a[z];}
        else if(a[z]>=b[z]) {sum+=a[z]; a1++;}
        else if(a[z]<=b[z]) {sum+=b[z]; b1++;}
    }
    cout<<sum<<endl;
    return 0;
}
