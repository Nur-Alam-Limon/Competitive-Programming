#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0,x=0,tmp=0,y=0,ans=0,z=0,cnt1=0;
    cin>>n;
    z=n/8;
    y=z*8;
    for(ll i=7;i<=y;i+=8)
    {
        x=i;
        while(x>0)
        {
            tmp=x%10;
            if(tmp==7) {cnt++; break;}
            x=x/10;
        }
    }
    ans=(n/100)*10+(z-cnt)+(n/10);
    if(n>700) ans+=100;
    if(n>7000) ans+=1000;
    if(n>70000) ans+=10000;
    cout<<n-ans<<endl;
    return 0;
}

