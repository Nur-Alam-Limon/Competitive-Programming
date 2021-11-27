#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x,y,l0=0,l1=0,r0=0,r1=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x==0) l0++; else l1++;
        if(y==0) r0++; else r1++;
    }
    ll a=min(l0,l1);
    ll b=min(r0,r1);
    cout<<a+b<<endl;
    return 0;
}
