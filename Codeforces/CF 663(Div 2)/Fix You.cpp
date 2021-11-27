#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,cnt=0;
        cin>>n>>m;
        string s[n+5];
        for(ll i=0;i<n;i++) {cin>>s[i];}
        if(n==1)
        {
            for(ll i=0;i<m-1;i++)
            {
                if(s[0][i]!='R') cnt++;
            }
            cout<<cnt<<endl;
            continue;
        }
        if(m==1)
        {
            for(ll i=0;i<n-1;i++)
            {
                if(s[i][0]!='D') cnt++;
            }
            cout<<cnt<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i][m-1]=='R') cnt++;
        }
        for(ll i=0;i<m;i++)
        {
            if(s[n-1][i]=='D') cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
