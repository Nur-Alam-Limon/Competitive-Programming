#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    if(n==1)
    {
        cout<<"1 1"<<endl;
        cout<<-a[0]<<endl;
        cout<<"1 1"<<endl;
        cout<<0<<endl;
        cout<<"1 1"<<endl;
        cout<<0<<endl;
        return 0;
    }
    cout<<"1 1"<<endl;
    cout<<a[0]*(n-1)<<endl;
    a[0]=a[0]*n;
    cout<<2<<" "<<n<<endl;
    for(ll i=1;i<n;i++)
    {
        ll x=a[i]*(n-1);
        cout<<x<<" ";
        a[i]=a[i]*n;
    }
    cout<<endl;
    cout<<1<<" "<<n<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<-a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
