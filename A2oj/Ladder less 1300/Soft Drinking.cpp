#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,d,e,f,g,h,ans=1000000000;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    ans=min(ans,b*c/g);
    ans=min(ans,d*e);
    ans=min(ans,f/h);
    cout<<ans/a<<endl;
    return 0;
}
