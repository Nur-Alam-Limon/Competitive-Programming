#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll r,c,x,y,t=1,p=0,q=2,a=0;
    cin>>r>>c>>x>>y;
        p=y;
        while(p)
        {
            cout<<x<<" "<<p<<endl;
            p--;
        }
        p=y+1;
        while(p<=c)
        {
            cout<<x<<" "<<p<<endl;
            p++;
        }
        for(ll i=x-1;i>0;i--)
        {
            cout<<i<<" "<<c<<endl;
        }
        for(ll i=x+1;i<=r;i++)
        {
            cout<<i<<" "<<c<<endl;
        }
        a=c-1;
        while(t)
        {
        if(q%2==0){
        for(ll j=r;j>=1;j--)
        {
            if(j!=x) cout<<j<<" "<<a<<endl;
        }
        a--;
        q++;
        }
        else {
        for(ll j=1;j<=r;j++)
        {
            if(j!=x) cout<<j<<" "<<a<<endl;
        }
        a--;
        q++;
        }
        if(a==0) break;
        }
    return 0;
}

