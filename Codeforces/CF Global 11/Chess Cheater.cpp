#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,cnt=0,z=0,x=2,ans=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='L') cnt++;
        }
        if(cnt<=k) {cout<<(n*2)-1<<endl; continue;}
        if(k==0 && cnt!=n) {cout<<((n-cnt)*2)-1<<endl; continue;}
        if(k==0 && cnt==n) {cout<<((n-cnt)*2)<<endl; continue;}
        cnt=0;
        while(1)
        {
            for(ll i=1;i<s.size()-1;i++)
            {
                if(s[i]=='L' && s[i-1]=='W' && s[i+1]=='W') {s[i]='W'; cnt++;}
                if(cnt==k) break;
            }
            if(cnt==k) break;
            if(s[0]=='L' && s[1]=='W') {s[0]='W'; cnt++;}
            if(cnt==k) break;
            if(s[n-1]=='L' && s[n-2]=='W') {s[n-1]='W'; cnt++;}
            if(cnt==k) break;
            break;
        }
        while(1)
        {
            if(cnt>=k) break;
            z=0;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='W') z=0;
                else if(s[i]=='L') z++;
                if(s[i+1]=='W' && z==x)
                {
                    for(ll j=i;j>=i-x+1;j--)
                    {
                        s[j]='W';
                        cnt++;
                        if(cnt==k) break;
                    }
                }
                else if(i==n-1 && z==x)
                {
                    for(ll j=i-x+1;j<=i;j++)
                    {
                        s[j]='W';
                        cnt++;
                        if(cnt==k) break;
                    }
                }
                if(cnt==k) break;
            }
            x++;
        }
        //cout<<s<<endl;
        cnt=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='W') cnt++;
            else if(s[i]=='L')
            {
                if(cnt!=0) ans+=(cnt*2)-1;
                cnt=0;
            }
        }
        if(cnt>0) ans+=(cnt*2)-1;
        cout<<ans<<endl;
    }
    return 0;
}


