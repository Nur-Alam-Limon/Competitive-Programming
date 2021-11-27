#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x=0,y=0,ans=0;
        cin>>n>>k;
        if(n%2==0)
        {
            ans=k%n;
            if(ans==0) ans=n;
            cout<<ans<<endl;
            continue;
        }
        x=(n-1)/2;
        y=(k-1)/x;
        ans=(k+y)%n;
        if(ans==0) ans=n;
        cout<<ans<<endl;
    }
    return 0;
}

