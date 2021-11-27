#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y=0,z=0;
        cin>>x;
        ll ar[x+5];
        for(ll i=1;i<=x;i++) {cin>>ar[i];}
        for(ll i=1;i<=x;i++)
        {
            if((ar[i]-ar[i-1])==0) y++;
        }
        if(y==(x-1)) z=1;
        for(ll i=1;i<=x;i+=2)
        {
            if(z==1) break;
            if(ar[i]<0)
            {
                ar[i]*=(-1);
            }
        }
        for(ll i=2;i<=x;i+=2)
        {
            if(z==1) break;
            if(ar[i]>0)
            {
                ar[i]*=(-1);
            }
        }
        for(ll i=1;i<=x;i++)
            {
                cout<<ar[i]<<" ";
            }
            cout<<endl;
    }
    return 0;
}
