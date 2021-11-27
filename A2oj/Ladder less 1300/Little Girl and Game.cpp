#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll a[30]={0};
    ll cnt=0,z=0;
    for(ll i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    for(ll i=0;i<26;i++)
    {
        if(a[i]==0 || a[i]%2==0) continue;
        cnt+=a[i];
        if(a[i]>z) z=a[i];
    }
    if((cnt-z)%2) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
    return 0;
}
