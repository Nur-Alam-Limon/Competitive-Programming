#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll cnt=0;

ll primefactor(ll n)
{
    cnt=0;
    while(n%2==0)
    {
        cnt++;
        n=n/2;
    }
    for(int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            cnt++;
            n=n/i;
        }
    }
    if(n>2)
        cnt++;

    return cnt;
}

int main()
{
    ll n;
    cin>>n;
    cout<<primefactor(n)<<endl;;
    return 0;
}
