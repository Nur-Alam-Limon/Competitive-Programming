#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll x,y,z,ans=0,a=0;
    cin>>x>>y>>z;
    ans=x+y+z;
    if(x>=500) ans-=100;
    if(y>=500) ans-=100;
    if(z>=500) ans-=100;
    if(x<500 && y<500 && x+y>=500) ans-=100;
    else if(x<500 && z<500 && x+z>=500) ans-=100;
    else if(y<500 && z<500 && z+y>=500) ans-=100;
    else if(x<500 && y<500 && z<500 && x+y+z>=500) ans-=100;
    cout<<ans<<endl;
    return 0;
}




