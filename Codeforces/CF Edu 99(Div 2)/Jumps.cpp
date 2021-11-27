#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y=0,ans=0,cnt=0,z=0;
        cin>>x;
        for(ll i=1;i<=10000;i++)
        {
            y+=i;
            cnt++;
            if(y>=x) break;
        }
        z=y-x;
        if(z==1) ans=cnt+1;
        else ans=cnt;
        cout<<ans<<endl;
    }
    return 0;
}


