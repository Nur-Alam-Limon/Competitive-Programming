#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll x,b=0,cnt=0;
    double a;
    cin>>x;
    for(ll i=1;i<=x;i++)
    {
        for(ll j=i;j<=x;j++)
        {
            a=sqrt((i*i)+(j*j));
            b=(int)a;
            if(b>x) break;
            if(b==a) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
