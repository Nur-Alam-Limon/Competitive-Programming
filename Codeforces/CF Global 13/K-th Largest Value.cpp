#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,q,cnt=0,x,y;
    cin>>n>>q;
    ll a[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) cnt++;
    }
    while(q--)
    {
        cin>>x>>y;
        if(x==1)
        {
            a[y-1]=1-a[y-1];
            if(!a[y-1]) cnt--;
            else cnt++;
        }
        else
        {
            if(y<=cnt) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}
