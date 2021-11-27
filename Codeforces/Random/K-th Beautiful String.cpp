#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x=0,y=0,sum=0;
        cin>>n>>k;
        for(ll i=n-2;i>=0;i--)
        {
            sum+=n-1-i;
            x=i;
            if(sum>=k) break;
        }
        y=n-1-x;
        y=sum-y+1;
        y=(n-1)-(k-y);
        for(ll i=0;i<n;i++)
        {
            if(i==x || i==y) cout<<"b";
            else cout<<"a";
        }
        cout<<endl;
    }
    return 0;
}
