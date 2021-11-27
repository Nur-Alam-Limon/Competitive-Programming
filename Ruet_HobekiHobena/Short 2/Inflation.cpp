#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,flag=0;
    double ans=1e8,x=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(a[i]>i+1) flag=1;
        x=(double)a[i]/((double)i+1);
        ans=min(ans,x);
    }
    if(flag) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}



