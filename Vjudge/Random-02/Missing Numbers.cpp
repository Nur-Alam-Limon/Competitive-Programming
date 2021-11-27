#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x,y;
    cin>>n;
    ll a[205];
    memset(a,0,sizeof(a));
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        y=x;
        a[x]++;
    }
    if(y==n) cout<<"good job"<<endl;
    else
    {
        for(ll i=1;i<=y;i++)
        {
            if(a[i]==0) cout<<i<<endl;
        }
    }
    return 0;
}
