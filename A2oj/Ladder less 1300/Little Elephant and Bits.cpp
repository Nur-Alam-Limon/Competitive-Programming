#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll z=0,x=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='0') z++;
        if(s[i]=='0' && x==0) x=i;
    }
    if(z==0 || z==s.size())
    {
        for(ll i=1;i<s.size();i++) cout<<s[i];
        cout<<endl;
        return 0;
    }
    for(ll i=0;i<s.size();i++)
    {
        if(i==x) continue;
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
