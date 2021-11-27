#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt1=0,cnt2=0;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==100) cnt1++;
        else cnt2++;
    }
    if(n==1 || (cnt1==0 && n%2==1) || (cnt2==0 && n%2==1)) cout<<"NO"<<endl;
    else if(cnt1==cnt2*2 || (cnt1==0 && n%2==0) || (cnt2==0 && n%2==0)) cout<<"YES"<<endl;
    else if((cnt1>cnt2*2 && (cnt1-cnt2*2)%2==0) || (cnt2*2>cnt1 && (cnt2*2-cnt1)%2==0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
