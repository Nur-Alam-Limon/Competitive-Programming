#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,j=1;
        cin>>n>>k;
        ll a[n+5];
        vector<ll>x;
        memset(a,0,sizeof(a));
        for(ll i=0;i<k;i++)
        {
            a[i]=j;
            j++;
        }
        j=k-1;
        for(ll i=k;i<n;i++)
        {
            a[i]=j;
            j--;
        }
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]<a[i])
            {
                x.push_back(a[i-1]);
            }
        }
        sort(x.begin(),x.end());
        if(x.size()==0)
        {
            for(ll i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        if(x.size()==2)
        {
            cout<<2<<" "<<1<<endl;
            continue;
        }
        ll p=0,q=x.size()-1;
        for(ll i=0;i<x.size();i++)
        {
            if(i%2==0) {cout<<x[p]<<" "; p++;}
            else {cout<<x[q]<<" "; q--; }
        }
        cout<<endl;
    }
    return 0;
}

