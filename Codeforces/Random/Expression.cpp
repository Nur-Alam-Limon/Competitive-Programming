#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,ans=0;
    cin>>a>>b>>c;
    ans=max(a+b+c,a*b*c);
    ans=max(max(a+b*c,a*b+c),ans);
    ans=max(max((a+b)*c,a*(b+c)),ans);
    cout<<ans<<endl;
    return 0;
}
