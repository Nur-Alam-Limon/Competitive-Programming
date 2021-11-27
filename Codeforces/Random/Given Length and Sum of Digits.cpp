#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,sum=0,k=0,x=0,y=0;
    cin>>a>>b;
    ll ar[a+5],ar1[a+5];
    if(a==1 && b<10) {cout<<b<<" "<<b<<endl; return 0;}
    if(b<1 || b>a*9) {cout<<-1<<" "<<-1<<endl; return 0;}
    for(ll i=0;i<a;i++)
    {
        k=0;
        for(ll j=9;j>=0;j--)
        {
            if(sum==b) {k=0; break;}
            if(sum+j<=b) {k=j; break;}
        }
        sum+=k;
        ar1[i]=k;
    }
    sum=0;
    for(ll i=0;i<a;i++)
    {
        k=0;
        for(ll j=9;j>=0;j--)
        {
            if(sum+j<b && i<a-1) {k=j; break;}
            if(sum+j==b && i==a-1) {k=j; break;}
        }
        ar[i]=k;
        sum+=k;
    }
    for(ll i=a-1;i>=0;i--) cout<<ar[i];
    cout<<" ";
    for(ll i=0;i<a;i++) cout<<ar1[i];
    cout<<endl;
    return 0;
}
