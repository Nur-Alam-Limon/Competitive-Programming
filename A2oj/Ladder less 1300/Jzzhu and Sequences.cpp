#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll x,y,n,ans=0,a,b;
    cin>>x>>y>>n;
    a=-x;
    b=-y;
    ll c=1000000007;
    while(x<0) x+=c;
    while(y<0) y+=c;
    if(n%6==1) ans=x%c;
    else if(n%6==2) ans=y%c;
    else if(n%6==3) ans=((y%c)-(x%c)+c)%c;
    while(a<0) a+=c;
    while(b<0) b+=c;
    if(n%6==4) ans=a%c;
    else if(n%6==5) ans=b%c;
    else if(n%6==0) ans=((x%c)-(y%c)+c)%c;
    cout<<ans<<endl;
    return 0;
}
