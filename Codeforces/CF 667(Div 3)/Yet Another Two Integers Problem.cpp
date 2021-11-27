//Bismillahir Rah Manir Rahim
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,ans=0,x=0,y=0,z=0,i=10;
        cin>>a>>b;
        if(a==b) {cout<<0<<endl; continue;}
        x=abs(a-b);
        if(a<b) {y=a; z=b;}
        else {y=b; z=a;}
        for(ll j=10;j>0;j--)
        {
            ans+=x/j;
            x=x-((x/j)*j);
            if(x==0) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
