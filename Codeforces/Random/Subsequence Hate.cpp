#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        ll x=0,a=0,b=0,c=0,d=0,ans=0;
        cin>>s;
        x=s.size();
        ans=x;
        for(ll i=0;i<x;i++)
        {
            a=0,b=0,c=0,d=0;
            for(ll j=0;j<i;j++)
            {
                if(s[j]=='1') a++;
                else b++;
            }
            for(ll j=i;j<x;j++)
            {
                if(s[j]=='1') c++;
                else d++;
            }
            ans=min(ans,a+d);
            ans=min(ans,b+c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
