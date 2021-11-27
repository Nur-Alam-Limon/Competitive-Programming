#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,sum=0,x=0;
        cin>>a>>b>>c;
        sum=a+b+c;
        x=sum/9;
        if(sum%9!=0) cout<<"NO"<<endl;
        else if(a<x || b<x ||c<x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
