#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y,cnt=0,ans=0,cnt1=0;
        cin>>n>>m>>x>>y;
        char s[n+5][m+5];
        for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
            { cin>>s[i][j];}
        if(x*2<=y)
        {
            for(ll i=0;i<n;i++){
                for(ll j=0;j<m;j++) {if(s[i][j]=='.') cnt++;}}
                cout<<cnt*x<<endl;
                continue;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=1;j<m;j=j+2)
            {
                if(s[i][j]=='.' && s[i][j-1]=='.') cnt++;
                else j--;
            }
        }
        ans+=cnt*y;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(s[i][j]=='.') cnt1++;
            }
        }
        cnt1=cnt1-cnt*2;
        ans+=cnt1*x;

        cout<<ans<<endl;
    }
    return 0;
}
