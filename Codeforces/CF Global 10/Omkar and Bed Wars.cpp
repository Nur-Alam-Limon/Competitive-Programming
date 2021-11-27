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
        for(ll i=0;i<n-2;i++)
        {
            if(s[i]==s[i+2] && s[i+1]==s[i+2])
            {
                cnt++;
                if(s[i]=='L')
                {
                    s[i+1]='R';
                }
                else s[i+1]='L';
            }
        }
        if(s[n-2]==s[0] && s[0]==s[n-1])
        {
            cnt++;
                if(s[n-1]=='L')
                {
                    s[n-1]='R';
                }
                else s[n-1]='L';
        }
        if(s[n-1]==s[1] && s[0]==s[1])
        {
            cnt++;
                if(s[0]=='L')
                {
                    s[0]='R';
                }
                else s[0]='L';
        }
        cout<<cnt<<endl;
    }
    return 0;
}

