#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,y=0,x=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        y=n-1;
        for(ll i=0;i<n;i++)
        {
            if(i%2==0) {cout<<a[x]<<" "; x++;}
            else {cout<<a[y]<<" "; y--;}
        }
        cout<<endl;
    }
    return 0;
}
