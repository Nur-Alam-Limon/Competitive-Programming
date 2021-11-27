#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll pyth(ll num)
{
    ll a,b,c=0,cnt=0;
    ll m=2;

    while(c<num)
    {
        for(int i=1;i<m;i++)
        {
            a=m*m-i*i;
            b=2*m*i;
            c=m*m+i*i;
            if(c>num) break;
            if(c==(a*a-b)) {cout<<a<<" "<<b<<" "<<c<<endl; cnt++;}
        }
        m++;
    }
    return cnt;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<pyth(n)<<endl;
    }
    return 0;
}

