#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,cnt=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        x=a[0];
        for(ll i=1;i<n;i++)
        {
            if(a[i]!=x) cnt++;
        }
        if(cnt==0) cout<<n<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
