#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll c1=0,c2=0,c3=0;
    for(ll i=0;i<s.size();i+=2)
    {
        if(s[i]=='1') c1++;
        if(s[i]=='2') c2++;
        if(s[i]=='3') c3++;
    }
    for(ll i=0;i<c1-1;i++) cout<<1<<"+";
    if(c1>0 && c2==0 && c3==0) cout<<1;
    else if(c1>0) cout<<1<<"+";
    for(ll i=0;i<c2-1;i++) cout<<2<<"+";
    if(c3==0 && c2>0) cout<<2;
    else if(c2>0) cout<<2<<"+";
    for(ll i=0;i<c3-1;i++) cout<<3<<"+";
    if(c3>0) cout<<3;
    cout<<endl;
    return 0;
}
