#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll a[30],cnt=0;
    memset(a,0,sizeof(a));
    for(ll i=0;i<s1.size();i++) a[s1[i]-65]++;
    for(ll i=0;i<s2.size();i++) a[s2[i]-65]++;
    for(ll i=0;i<s3.size();i++) a[s3[i]-65]--;
    for(ll i=0;i<30;i++)
    {
        if(a[i]!=0) cnt++;
    }
    if(cnt==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
