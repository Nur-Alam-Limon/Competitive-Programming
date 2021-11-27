#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t,cnt;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,k,cnt=0,j=0,ans=0,flag=0;
        cin>>n>>k;
        char s[n+5];
        cin>>s;
        ll x[n+2];
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0') cnt++;
        }
        if(cnt==0 || cnt==n) {cout<<0<<endl; continue;}
        cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0') cnt++;
            if(s[i]=='1') {if(cnt!=0) {x[flag]=cnt; flag++;} cnt=0;}
        }
        sort(x,x+flag,greater<int>());
        while(k>0)
        {
            cnt=0;
            for(ll i=0;i<n;i++)
            {
                if(s[i]=='0') cnt++;
                if(cnt==x[j])
                {
                    ll q=i-cnt+1;
                    for(ll p=q;p<=i;p++) {s[p]=-1; cout<<s[p]<<" ";}
                    if(k>1 && i-cnt+1>0) k=k-2;
                    else {k--; if(i-cnt+1>0) ans++;}
                    break;
                }
                if(s[i]=='1') cnt=0;
            }
            j++;
            if(j>=flag) break;
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
