#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    double n;
    while(cin>>n)
    {
        ll x=(n+.001)*100;
        if(x==0) break;
        ll a[x+5]={0};
        a[0]=1;
        ll b[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
        for(ll i=0;i<11;i++)
            for(ll j=b[i];j<=x;j++)
            {
                a[j]+=a[j-b[i]];
            }
        cout<<right<<setw(6)<<setprecision(2)<<fixed<<n<<right<<setw(17)<<a[x]<<endl;
    }
    return 0;
}
