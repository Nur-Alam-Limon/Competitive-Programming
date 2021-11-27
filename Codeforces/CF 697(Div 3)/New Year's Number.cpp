#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,flag=0,x=0;
        cin>>n;
        if(n%2020==0) flag=1;
        else if(n%2021==0) flag=1;
        x=n;
        while(x>2021)
        {
            x=x-2021;
            if(x%2020==0) {flag=1; break;}
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

