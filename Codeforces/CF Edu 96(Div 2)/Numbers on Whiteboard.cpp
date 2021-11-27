#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0;
        cin>>n;
        cout<<2<<endl;
        x=n;
        for(ll i=n-1;i>0;i--)
        {
            cout<<i<<" "<<x<<endl;
            if((x+i)%2==0) x=(x+i)/2;
            else x=1+((x+i)/2);
        }
    }
    return 0;
}




