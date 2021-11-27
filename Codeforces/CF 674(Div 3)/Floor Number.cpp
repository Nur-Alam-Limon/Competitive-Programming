#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        if(n-2<=0) {cout<<1<<endl; continue;}
        else n=n-2;
        if(n%x==0) {cout<<(n/x)+1<<endl; continue;}
        else cout<<(n/x)+2<<endl;
    }
    return 0;
}
