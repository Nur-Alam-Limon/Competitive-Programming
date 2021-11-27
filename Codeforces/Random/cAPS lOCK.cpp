#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll x=0,y=0;
    string s;
    cin>>s;
    if(s[0]>90) y=1;
    else x=1;
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]<=90) x++;
    }
    if(x==s.size() || (x==s.size()-1 && y==1)) {
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]<=90) s[i]=s[i]+32;
        else if(s[i]>90) s[i]=s[i]-32;
    }}
    cout<<s<<endl;
    return 0;
}
