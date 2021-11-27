#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0;
    cin>>n;
    string s[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
    }
    for(ll i=0;i<n;i++)
    {
        if(s[i]=="0") continue;
        cnt++;
        cout<<s[i]<<endl;
        for(ll j=i+1;j<n;j++)
        {
            if(s[j]==s[i]) s[j]='0';
        }
    }
    cout<<cnt<<endl;
    return 0;
}
