#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i=1;
        cin>>n>>k;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        while(k--)
        {
            a[0]+=a[i];
            i++;
            if(i==n) break;
        }
        cout<<a[0]<<endl;
    }
    return 0;
}



