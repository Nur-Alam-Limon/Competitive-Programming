#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[1000009];

int main()
{
    ll n,ans=0,x=0,fi=0,last=0;
    cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i];
    last=n-1;
    while(fi<last)
    {
        ans=max(ans,(a[fi]+a[last])*(last-fi));
        if(a[fi]<=a[last]) fi++;
        else last--;
    }
    fi=n/2;
    last=fi-1;
    while(fi<last)
    {
        ans=max(ans,(a[fi]+a[last])*(last-fi));
        if(a[fi]<=a[last]) fi--;
        else last++;
    }
    cout<<ans<<endl;
    return 0;
}
