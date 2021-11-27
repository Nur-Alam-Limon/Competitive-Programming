#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<n;i++)
        {
            if(a[i]<a[i-1] && (a[i-1]/a[i])>2) {cnt++; a[i]=a[i]*2; i--;}
            else if(a[i]>a[i-1] && (a[i]/a[i-1])>2) {cnt++; a[i]=(a[i]+1)/2; i--;}
        }
        cout<<cnt<<endl;
    }
    return 0;
}
