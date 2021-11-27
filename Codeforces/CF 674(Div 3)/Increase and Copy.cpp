#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,y=0,ans=0;
        cin>>n;
        x=sqrt(n);
        if(n%x==0) y=n/x;
        else y=(n/x)+1;
        ans=y+x-2;
        if(ans<0) ans=0;
        cout<<ans<<endl;
    }
    return 0;
}

