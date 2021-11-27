#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
        ll p=0,cnt=0;
        p=n;
        vector<ll>a;
        if(n<0) n=n*(-1);
        if(n%2==0)
        {
            a.push_back(2);
            cnt=1;
            while(n%2==0)
            {
                n=n/2;
            }
        }
        for(ll i=3;i<=sqrt(n);i+=2)
        {
            if(n==1) break;
            if(n%i==0)
            {
                a.push_back(i);
                cnt=1;
                while(n%i==0)
                {
                    n=n/i;
                }
            }
        }
        if(n>2) a.push_back(n);
        if(a.size()<2) cout<<-1<<endl;
        else cout<<a[a.size()-1]<<endl;
    }
    return 0;
}

