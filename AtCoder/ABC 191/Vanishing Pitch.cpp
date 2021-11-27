#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,d,x=0,y=0;
    cin>>a>>b>>c>>d;
    x=a*b;
    y=a*c;
    if(d<x || d>y) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
