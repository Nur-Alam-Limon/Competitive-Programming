#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,sum1=0,sum2=0,z=0;
    cin>>n;
    ll a[n+5],b[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sum1+=a[i];
        sum2+=b[i];
    }
    if(sum1%2==0 && sum2%2==0) cout<<0<<endl;
    else if(sum1%2==1 && sum2%2==0 || sum1%2==0 && sum2%2==1) cout<<-1<<endl;
    else if(n==1) cout<<-1<<endl;
    else
    {
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==1 && b[i]%2==0)
            {

                if((sum1-a[i]+b[i])%2==0 && (sum2-b[i]+a[i])%2==0) z=1;
            }
            if(a[i]%2==0 && b[i]%2==1)
            {

                if((sum1-a[i]+b[i])%2==0 && (sum2-b[i]+a[i])%2==0) z=1;
            }
        }
        if(z) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
