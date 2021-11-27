#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,k,x=0,ans=0;
    cin>>n>>k;
    if(n%2) x=(n+1)/2;
    else x=n/2;
    if(k<=x) ans=2*k-1;
    else
    {
        x=k-x;
        ans=2*x;
    }
    cout<<ans<<endl;
    return 0;
}
