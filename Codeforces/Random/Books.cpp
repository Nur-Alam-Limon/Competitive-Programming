#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,t,ans=0,sum=0,x=0;
    cin>>n>>t;
    ll ar[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        if(sum>t) {sum-=ar[x]; x++;}
        ans=max(ans,i-x+1);
    }

    cout<<ans<<endl;
    return 0;
}
