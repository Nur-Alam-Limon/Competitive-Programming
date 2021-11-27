#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k=0,cnt=0,x=0,y=0;
        cin>>n;
        string s[n+5];
        for(ll i=0;i<n;i++) cin>>s[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(s[i][j]=='.') cnt++;
            }
        }
        k=n*n-cnt;
        k=k/3;
        if(n<3)
        {
            for(ll i=0;i<n;i++) cout<<s[i];
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n-2;j++)
            {
                x=s[i][j];
                if(x=='.') continue;
                if(s[i][j+1]==x && s[i][j+2]==x)
                {
                    j+=2;
                    if(s[i+1][j]==x && s[i+2][j]==x)
                    {
                        if(x=='X') s[i][j]='O';
                        else s[i][j]='X';
                        y++;
                    }
                    else if(s[i+1][j]==x && s[i-1][j]==x)
                    {
                        if(x=='X') s[i][j]='O';
                        else s[i][j]='X';
                        y++;
                    }
                    else if(s[i+1][j+1]==x && s[i+2][j+1]==x)
                    {
                        if(x=='X') s[i][j+1]='O';
                        else s[i][j+1]='X';
                        y++;
                    }
                    else if(s[i+1][j+1]==x && s[i-1][j+1]==x)
                    {
                        if(x=='X') s[i][j+1]='O';
                        else s[i][j+1]='X';
                        y++;
                    }
                    else if(s[i+1][j+2]==x && s[i+2][j+2]==x)
                    {
                        if(x=='X') s[i][j+2]='O';
                        else s[i][j+2]='X';
                        y++;
                    }
                    else if(s[i+1][j+2]==x && s[i-1][j+2]==x)
                    {
                        if(x=='X') s[i][j+2]='O';
                        else s[i][j+2]='X';
                        y++;
                    }
                    else
                    {
                        if(x=='X') s[i][j]='O';
                        else s[i][j]='X';
                        y++;
                    }
                }
            }
        }

        for(ll i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }
        cout<<y<<endl;
    }
    return 0;
}


