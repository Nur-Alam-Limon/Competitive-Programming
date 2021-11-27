#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=0;i<s.size()-1;i++)
        {
            if((s[i]=='<' && s[i+1]=='>') || (s[i]=='>' && s[i+1]=='<')) cnt++;
        }
        if((s[n-1]=='<' && s[n-2]=='>') || (s[n-1]=='>' && s[n-2]=='<')) cnt++;
        cout<<n-cnt<<endl;
    }
    return 0;
}


