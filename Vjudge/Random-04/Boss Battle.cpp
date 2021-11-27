#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,ans=1;
    cin>>n;
    if(n>3) ans+=n-3;
    cout<<ans<<endl;
    return 0;
}

