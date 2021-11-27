#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0,x=0;
        cin>>n;
        ll a[n+5],b[n+5];
        for(ll i=0;i<n;i++) {cin>>a[i]; sum+=a[i];}
        sum=sum/n;
        for(ll i=1;i<n;i++)
        {
            if(a[i]>a[i-1] && a[i]%a[i-1]!=0) x=1;
            else if(a[i]<a[i-1] && a[i-1]%a[i]!=0) x=1;
        }
        if(x==0)
        {
            for(ll i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
            for(ll i=1;i<n;i++)
            {
                if(a[i]>a[i-1] && a[i]%a[i-1]==0) {b[i-1]=a[i-1];}
                else if(a[i]<a[i-1] && a[i-1]%a[i]==0) {b[i-1]=a[i-1];}
                else b[i-1]=a[i-1]*2;
            }
            for(ll i=0;i<n;i++) cout<<b[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}

