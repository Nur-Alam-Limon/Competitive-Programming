#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s,x;
        ll cnt=0,z=0,ans=0;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(x[z]=='A' && s[i]=='B') {cnt++; z++;}
            else if(x[z]=='B' && s[i]=='B') {cnt++; z++;}
            else if(s[i]=='A' && s[i+1]=='B') {cnt++; i++;}
            else if(s[i]=='B' && s[i+1]=='B') {cnt++; i++;}
            else x+=s[i];
        }
        ans=s.size()-cnt*2;
        cout<<ans<<endl;
    }
    return 0;
}

