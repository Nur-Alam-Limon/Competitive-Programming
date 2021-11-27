#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll x=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') i+=2;
        else if(s[i]=='1' && s[i+1]=='4') i++;
        else if(s[i]=='1') continue;
        else {x=-1; break;}
    }
    if(x==-1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
