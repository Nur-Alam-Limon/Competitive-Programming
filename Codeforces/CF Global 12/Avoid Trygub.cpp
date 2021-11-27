#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,cnt1=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='b') cnt++;
            if(s[i]=='u') cnt1++;
        }
        for(ll i=0;i<cnt;i++) cout<<"b";
        for(ll i=0;i<cnt1;i++) cout<<"u";
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='b' || s[i]=='u') continue;
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
