#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x,y,cnt=0;
    cin>>n;
    ll a[400];
    memset(a,0,sizeof(a));
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        for(ll j=x;j<=y;j++)
        {
            if(a[j]==0) cnt++;
            a[j]=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
