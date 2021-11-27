#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll a[30];
    ll cnt=0;
    memset(a,0,sizeof(a));
    for(ll i=0;i<s.size();i++)
    {
        a[s[i]-'A']++;
    }
    for(ll i=0;i<26;i++)
    {
        if(i==0 || i==4 || i==8 || i==14 || i==20) continue;
        if(a[i]>0) cnt++;
    }
    if(cnt<5) {cout<<-1<<endl; return 0;}
    cnt=0;
    ll z=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {cnt++; continue;}
        if(cnt>=3) z=1;
        cnt=0;
    }
    if(z) cout<<"GOOD"<<endl;
    else cout<<-1<<endl;
    return 0;
}

