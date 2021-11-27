#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll r,c,cnt=0,x=0,ans=0,y=0;
    cin>>r>>c;
    string s[r+5];
    for(ll i=0;i<r;i++)
    {
        cin>>s[i];
    }
    for(ll i=0;i<r;i++)
    {
        cnt=0;
        for(ll j=0;j<c;j++)
        {
            if(s[i][j]=='#') cnt++;
        }
        if(cnt==0) continue;
        if(ans==0) {ans=3; x=cnt; continue;}
        y=abs(x-cnt);
        if(cnt!=x && y!=2) {ans+=2; x=cnt;}
        else x=cnt;
    }
    cout<<ans+1<<endl;
    return 0;
}


