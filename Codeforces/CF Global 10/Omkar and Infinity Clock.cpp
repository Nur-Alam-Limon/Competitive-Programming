#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x=0,y=0,z=0;
        cin>>n>>k;
        ll a[n+5],b[n+5],c[n+5];
        for(ll i=0;i<n;i++) {cin>>a[i];}
        sort(c,c+n);
        x=*max_element(a,a+n);
        for(ll i=0;i<n;i++)
        {
            b[i]=x-a[i];
        }
        y=*max_element(b,b+n);
        for(ll i=0;i<n;i++)
        {
            c[i]=y-b[i];
        }
        if(k%2==0)
        {
            for(ll i=0;i<n;i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
        if(k%2==1)
        {
            for(ll i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

