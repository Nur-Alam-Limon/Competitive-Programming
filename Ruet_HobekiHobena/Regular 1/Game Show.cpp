#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll c,ans=100,x=0,y=100;
    cin>>c;
    for(ll i=0;i<c;i++)
    {
        cin>>x;
        y+=x;
        ans=max(ans,y);
    }
    cout<<ans<<endl;
    return 0;
}
