#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m=0,x=0,sum=0;
    vector<ll>y;
    cin>>n;
    int b[n+5],c[n+5],arr[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        b[i]=arr[i];
        c[i]=i;
    }
    for(ll i=1;i<n;i++)
        for(ll j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && b[i]<b[j]+arr[i])
            {
                b[i]=b[j]+arr[i];
                c[i]=j;
            }
        }
    for(ll i=0;i<n;i++ )
    {
        if(m<b[i]) {m=b[i]; x=i;}
    }
    while(sum<m)
    {
        y.push_back(arr[x]);
        sum+=arr[x];
        x=c[x];
    }
    cout<<m<<endl;
    for(ll i=y.size()-1;i>=0;i--) cout<<y[i]<<" ";
    cout<<endl;
    return 0;
}
