#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2,ans=0;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2) {cout<<abs(y1-y2)<<endl; continue;}
        if(y1==y2) {cout<<abs(x1-x2)<<endl; continue;}
        ans+=abs(x1-x2);
        ans+=abs(y2-y1)+1;
        cout<<ans+1<<endl;
    }
    return 0;
}

