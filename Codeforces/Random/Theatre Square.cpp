#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,ans=1;
    cin>>a>>b>>c;
    if(c>=a && c>=b) {cout<<1<<endl; return 0;}
    if(c<=a)
    {
        if(a%c==0) ans*=a/c;
        else ans*=(a/c)+1;
    }
    if(c<=b)
    {
        if(b%c==0) ans*=b/c;
        else ans*=(b/c)+1;
    }
    cout<<ans<<endl;
    return 0;
}
