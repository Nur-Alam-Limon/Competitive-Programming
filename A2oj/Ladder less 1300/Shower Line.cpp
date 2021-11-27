#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a[6][6],b[6],ans=0,sum=0;
    for(ll i=0;i<5;i++)
        for(ll j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    for(ll i=0;i<5;i++) b[i]=i;
    do
    {
        sum=a[b[0]][b[1]]+a[b[1]][b[0]];
        sum+=a[b[2]][b[3]]+a[b[3]][b[2]];

        sum+=a[b[2]][b[1]]+a[b[1]][b[2]];
        sum+=a[b[4]][b[3]]+a[b[3]][b[4]];

        sum+=a[b[2]][b[3]]+a[b[3]][b[2]];

        sum+=a[b[4]][b[3]]+a[b[3]][b[4]];

        if(sum>ans) ans=sum;
    }
    while(next_permutation(b,b+5));

    cout<<ans<<endl;
    return 0;
}
