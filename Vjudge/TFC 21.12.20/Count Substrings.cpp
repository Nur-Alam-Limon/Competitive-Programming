#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll k,f[26],ans=0;
        cin>>k;
        for(ll i=0;i<s.size();i++)
        {
            memset(f,0,sizeof(f));
            ll cnt=0,mx=0,y=0;
            for(ll j=i;j<s.size();j++)
            {
                y=s[j]-'a';
                if(f[y]==0) cnt++;
                f[y]++;
                mx=max(mx,f[y]);
                if(cnt*mx==j-i+1 && cnt>=k) ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


