#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss;
        ss<<s;
        ll a[100000],dp[100000];
        ll k=0,sum=0;
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));
        while(ss)
        {
            ss>>a[k];
            k++;
        }
        for(ll i=0;i<k;i++)
        {
            sum+=a[i];
        }
        if(sum%2) {cout<<"NO"<<endl; continue;}
        for(ll i=0;i<k;i++)
            for(ll j=sum/2;j>=a[i];j--)
        {
            dp[j]=max(dp[j],a[i]+dp[j-a[i]]);
        }
        if(dp[sum/2]==sum/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
