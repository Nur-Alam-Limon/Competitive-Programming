#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,success=0,total=1e18;
        cin>>n;
        while(n--)
        {
            ll x;
            char ch;
            cin>>x>>ch;
            if(ch=='-') total=min(total,success+x+25);
            else success+=25+x;
        }
        cout<<total-success<<endl;
    }
    return 0;
}


