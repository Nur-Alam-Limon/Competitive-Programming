#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll cnt=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9') {cnt=1; break;}
    }
    if(cnt) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
