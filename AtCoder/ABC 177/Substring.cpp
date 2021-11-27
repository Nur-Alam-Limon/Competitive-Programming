#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s,t;
    cin>>s>>t;
    ll ans=t.size();
    ll dif=0;
    for(ll i=0;i<=s.size()-t.size();i++)
    {
        dif=0;
        for(ll j=0;j<t.size();j++)
        {
            if(t[j]!=s[j+i])
            {
                dif++;
            }
        }
        ans=min(ans,dif);
    }
    cout<<ans<<endl;
    return 0;
}
