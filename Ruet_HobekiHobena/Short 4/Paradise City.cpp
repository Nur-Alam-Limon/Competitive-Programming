#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,col=0,ans=0,cnt=0;
        cin>>n;
        col=n*3;
        char a[3][col];
        for(ll i=0;i<3;i++)
        {
            for(ll j=0;j<col;j++)
            {
                cin>>a[i][j];
            }
        }
        for(ll i=0;i<col;i=i+3)
        {
            cnt=0;
            for(ll j=0;j<3;j++)
            {
                if(a[j][i]=='*') cnt++;
                if(a[j][i+1]=='*') cnt++;
                if(a[j][i+2]=='*') cnt++;
            }
            ans=max(ans,cnt);
        }
        cout<<ans*4<<endl;
    }
    return 0;
}

