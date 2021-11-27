#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    ll a[30]={0},b[30]={0};
    ll z=0,cnt=0;
    if(s1.size()!=s2.size()) {cout<<"NO"<<endl; return 0;}
    for(ll i=0;i<s1.size();i++) a[s1[i]-'a']++;
    for(ll i=0;i<s2.size();i++) b[s2[i]-'a']++;
    for(ll i=0;i<26;i++)
    {
        if(a[i]!=b[i]) {z=1; break;}
    }
    if(z) {cout<<"NO"<<endl; return 0;}
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i]) cnt++;
    }
    if(cnt==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
