#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        if(a[0]+a[1]>a[n-1]) cout<<-1<<endl;
        else cout<<1<<" "<<2<<" "<<n<<endl;
    }
    return 0;
}
