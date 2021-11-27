#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a,ll b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}

ll findlcm()
{
    ll ans=2;

    for(int i=3;i<31;i++)
    {
        ans=(i*ans)/gcd(i,ans);
    }
    return ans;
}


int main()
{
    ll n,x=0;
    cin>>n;
    x=findlcm();
    cout<<x+1<<endl;
    return 0;
}
