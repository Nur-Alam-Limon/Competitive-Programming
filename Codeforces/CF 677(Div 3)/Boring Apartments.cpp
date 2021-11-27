#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,x=0,ans=0;
        cin>>n;
        while(n)
        {
            x=n;
            n=n/10;
            cnt++;
        }
        ans=(x-1)*10;
        for(ll i=1;i<=cnt;i++)
        {
            ans+=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}


