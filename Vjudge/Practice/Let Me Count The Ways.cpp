#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    while(cin>>n)
    {
        ll a[n+5]={0};
        a[0]=1;
        ll b[5]={1,5,10,25,50};
        for(ll i=0;i<5;i++)
            for(ll j=b[i];j<=n;j++)
            {
                a[j]+=a[j-b[i]];
            }
        if(a[n]==1) cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        else cout<<"There are "<<a[n]<<" ways to produce "<<n<<" cents change."<<endl;
    }
}
