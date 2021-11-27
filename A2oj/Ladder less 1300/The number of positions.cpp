#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    ans=n-m;
    if(ans-1>k) ans=ans-(ans-1-k);
    cout<<ans<<endl;
    return 0;
}
