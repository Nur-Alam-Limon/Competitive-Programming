#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a[35];
    memset(a,0,sizeof(a));
    ll k;
    cin>>k;
    string s;
    char c;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    for(ll i=0;i<26;i++)
    {
        if(a[i]%k || s.size()%k) {cout<<-1<<endl; return 0;}
        else a[i]=a[i]/k;
    }
    while(k--){
    for(ll j=0;j<26;j++)
    {
        for(ll i=0;i<a[j];i++)
        {
            c=j+97; cout<<c;
        }
    }}
    cout<<endl;
    return 0;
}
