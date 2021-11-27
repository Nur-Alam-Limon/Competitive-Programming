#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0,ans1=0;
        cin>>n;
        for(ll i=n/2;i>0;i--)
        {
            if(n%i==0) {ans=i; break;}
        }
        n=n-1;
        for(ll i=n/2;i>0;i--)
        {
            if(n%i==0) {ans1=i; break;}
        }
        cout<<max(ans,ans1)<<endl;
    }
    return 0;
}
