#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        ll k,mx=0;
        cin>>k;
        ll a[k+5];
        for(ll i=0;i<k;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        cout<<"Case "<<j<<": "<<endl;
        if(k==1) cout<<a[0]*a[0]<<endl;
        else if(!mx%2) cout<<mx*2<<endl;
        else
        {

        }
    }
    return 0;
}



