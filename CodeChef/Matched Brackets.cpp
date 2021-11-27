#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,p1=0,d=0,l=0,p2=0,x=0,y=0,z=0;
    cin>>n;
    ll ar[n+5];
    for(ll i=1;i<=n;i++) {cin>>ar[i];}
    for(ll j=1;j<=n;j++)
    {
        if(ar[j]==1)
        {
            x++;
            y++;
            if(x>d) {d=x; p1=j;}
        }
        if(ar[j]==2) {x--; z++;}
        if(y-z==0)
        {
            if(y>l) {l=y; p2=j-l*2;}
            y=0;
            z=0;
        }
    }
    cout<<d<<" "<<p1<<" "<<l*2<<" "<<p2+1<<endl;
    return 0;
}
