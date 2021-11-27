#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0;
    string ans,s;
    cin>>n;
    map<string,ll>v;
    while(n--)
    {
        cin>>s;
        v[s]++;
        if(v[s]>cnt) {ans=s; cnt=v[s];}
    }
    cout<<ans<<endl;
    return 0;
}
