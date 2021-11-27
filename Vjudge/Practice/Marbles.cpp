#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0) break;
        ll a,b,c1,c2,x=0,y=0,ans=0;
        cin>>c1>>a>>c2>>b;
        if(c1<=c2) {x=n/a; ll p=(n%a); if(p%b==0) {y=p/b;} else ans=-1;}
        else {y=n/b; ll p=(n%b); if(p%a==0) {x=p/a;} else ans=-1;}
        if(ans==-1) cout<<"failed"<<endl;
        else cout<<x<<" "<<y;
    }
    return 0;
}
