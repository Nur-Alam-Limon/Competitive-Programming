#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll cnt=0,z=0;
    string s[5];
    for(ll i=0;i<4;i++) cin>>s[i];
    for(ll j=0;j<3;j++)
    {
        for(ll i=0;i<3;i++)
        {
            if(s[j][i]=='#') cnt++;
            if(s[j][i+1]=='#') cnt++;
            if(s[j+1][i]=='#') cnt++;
            if(s[j+1][i+1]=='#') cnt++;
            if(cnt>=3) z=1;
            cnt=0;
            if(s[j][i]=='.') cnt++;
            if(s[j][i+1]=='.') cnt++;
            if(s[j+1][i]=='.') cnt++;
            if(s[j+1][i+1]=='.') cnt++;
            if(cnt>=3) z=1;
            cnt=0;
        }
    }
    if(z) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
