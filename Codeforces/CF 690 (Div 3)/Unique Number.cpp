#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k=0;
        cin>>n;
        ll x[15];
        if(n>45) {cout<<-1<<endl; continue;}
        if(n<10) {cout<<n<<endl; continue;}
        for(ll i=9;i>0;i--)
        {
            n=n-i;
            x[k]=i;
            k++;
            if(n<10 && n<i) {x[k]=n; break;}
        }
        for(ll i=k;i>=0;i--) cout<<x[i];
        cout<<endl;
    }
    return 0;
}

