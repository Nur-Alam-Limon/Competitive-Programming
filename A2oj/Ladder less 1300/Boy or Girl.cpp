#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;
    ll a[30],cnt=0;
    memset(a,0,sizeof(a));
    for(ll i=0;i<s.size();i++) a[s[i]-97]++;
    for(ll i=0;i<30;i++)
    {
        if(a[i]>0) cnt++;
    }
    if(cnt%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
