#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    double ans,sum=0,x;
    cin>>n;
    for(ll i=0;i<n;i++) {cin>>x; sum+=x;}
    ans=sum/n;
    cout<<fixed<<setprecision(20)<<ans<<endl;
    return 0;
}
