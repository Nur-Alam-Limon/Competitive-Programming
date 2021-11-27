#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    while(1)
    {
    string s;
    ll r=0;
    cin>>s;
    if(s=="0") break;
    for(ll i=0;i<s.size();i++)
    {
        r=(r*10+(s[i]-'0'))%17;
    }
    if(r==0) cout<<1<<endl;
    else cout<<0<<endl;
    }
    return 0;
}
