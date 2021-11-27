#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0;
        cin>>n;
        ll a[30]={0};
        string s[n+5];
        for(ll i=0;i<n;i++) cin>>s[i];
        for(ll i=0;i<n;i++)
            for(ll j=0;j<s[i].size();j++)
            {
                a[s[i][j]-97]++;
            }
        for(ll i=0;i<27;i++)
        {
            if(a[i]!=0)
            {
                if(a[i]%n!=0) x=1;
            }
        }
        if(x==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
