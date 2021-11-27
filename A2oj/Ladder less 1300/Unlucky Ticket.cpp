#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,y=0,z=0;
    cin>>n;
    string s,a,b;
    cin>>s;
    for(ll i=n;i<s.size();i++)
    {
        b+=s[i];
    }
    for(ll i=0;i<n;i++)
    {
        a+=s[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(ll i=0;i<n;i++)
    {
        if(a[i]<b[i]) y++;
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]>b[i]) z++;
    }
    if(y==n || z==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

