#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]<91) s1[i]+=32;
        if(s2[i]<91) s2[i]+=32;
    }
    if(s1==s2) {cout<<0<<endl; return 0;}
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]<s2[i]) {cout<<-1<<endl; break;}
        else if(s1[i]>s2[i]) {cout<<1<<endl; break;}
    }
    return 0;
}
