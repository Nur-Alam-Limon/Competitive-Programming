#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,flag=0,mx=0;
    cin>>n;
    string s[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(ll i=1;i<n;i++)
    {
        if(s[i].size()<=s[i-1].size()) {flag=1; break;}
    }
    if(!flag) {cout<<"impossible"<<endl; return 0;}
    for(ll i=n-2;i>=0;i--)
    {
        if(s[i].size()==s[i+1].size())
        {
            for(ll j=0;j<s[i].size();j++)
            {
                if(s[i+1][j]>s[i][j] && j!=0) {s[i+1][j]='0'; flag=0; break;}
                else if(s[i+1][j]>s[i][j] && s[i].size()==1) {s[i+1][j]='0'; flag=0; break;}
                else if(s[i+1][j]>s[i][j]) {s[i+1][j]='1'; flag=0; break;}
                else if(s[i+1][j]==s[i][j] && s[i][j]=='9' && j!=0) {s[i+1][j]='0'; flag=0; break;}
                else if(s[i+1][j]==s[i][j] && s[i][j]=='9' && j==0 && s[i].size()==1) {s[i+1][j]='0'; flag=0; break;}
                else if(s[i+1][j]==s[i][j] && s[i][j]=='9' && j==0) {s[i+1][j]='1'; flag=0; break;}
                else if(s[i+1][j]==s[i][j]) {s[i][j]='9'; flag=0; break;}
            }
            if(!flag)
            {
                if(s[i]<=s[i+1]) {flag=1; continue;}
                else break;
            }
        }
    }
    if(flag) cout<<"impossible"<<endl;
    else
    {
        for(ll i=0;i<n;i++) cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
}
