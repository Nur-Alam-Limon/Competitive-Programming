#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=0,cnt=0,z=0,cnt1=0;
    cin>>n;
    x=n;
    if(n<=3) {cout<<"NO"<<endl; return 0;}
    while(n!=0)
    {
        ll y=n%10;
        if(y==4 || y==7) cnt++;
        n=n/10;
        cnt1++;
    }
    if(cnt==cnt1) {cout<<"YES"<<endl; return 0;}
    for(ll i=2;i<=x;i++)
    {
        cnt=0;
        cnt1=0;
        if(x%i==0) {z=i;
        while(z!=0)
        {
            ll p=z%10;
            if(p==4 || p==7) cnt++;
            z=z/10;
            cnt1++;
        }
        if(cnt==cnt1) {cout<<"YES"<<endl; return 0;}}
    }
    cout<<"NO"<<endl;
    return 0;
}
