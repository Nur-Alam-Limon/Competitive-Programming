#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,ans=0,z=0,x=0;
        cin>>n;
        string s;
        cin>>s;
        if(n<=2) {cout<<1<<endl; continue;}
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='0') x++;
        }
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1') cnt++;
            else
            {
                if(cnt>1) {ans++; z+=cnt;}
                cnt=0;
            }
            if(i==n-1 && cnt>1) {z+=cnt; ans++;}
        }
        cnt=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='0') cnt++;
            else {if(cnt>1) {ans++; z+=cnt;} cnt=0;}
            if(i==n-1 && cnt>1) {z+=cnt; ans++;}
        }
        cnt=0;
        z=n-z;

        if(z%2) z++;
        if(x==0 || x==n) cout<<1<<endl;
        else cout<<ans+(z/2)<<endl;
    }
    return 0;
}




