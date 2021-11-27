#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;
    string s[n+2];
    for(ll i=0;i<n;i++) cin>>s[i];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(s[i][j]=='.' && ((i%2==0 && j%2==0) || (i%2==1 && j%2==1))) s[i][j]='B';
            else if(s[i][j]=='.') s[i][j]='W';
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++) cout<<s[i][j];
        cout<<endl;
    }
    return 0;
}
