#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mx=100000000;
ll prime[mx+5];
vector<ll>a;

void seive()
{
    prime[0]=prime[1]=1;
    for(ll i=4;i<=mx;i+=2) prime[i]=1;
    for(ll i=3;i*i<=mx;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=mx;j+=i*2)
            {
                prime[j]=1;
            }
        }
    }
    for(ll i=2;i<=mx;i++)
    {
        if(prime[i]==0) a.push_back(i);
    }
}

int main()
{
    seive();
    while(1)
    {
        ll n,x=0,p=0;
        cin>>n;
        p=n;
        if(n<0) break;
        x=a.size();
        for(ll i=0;i<x;i++)
        {
            if(a[i]>sqrt(p)) break;
            if(n%a[i]==0)
            {
                while(n%a[i]==0)
                {
                    cout<<"    "<<a[i]<<endl;
                    n=n/a[i];
                }
                if(n==1) break;
            }
        }
        if(n!=1) cout<<"    "<<n<<endl;
        cout<<endl;
    }
    return 0;
}
