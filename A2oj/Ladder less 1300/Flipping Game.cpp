#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,cnt=0,ans=0;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        vector<ll>tmp=a;
        for(ll j=i;j<n;j++)
        {
            if(a[j]==0) tmp[j]=1;
            else tmp[j]=0;
            cnt=0;
            for(ll k=0;k<n;k++)
            {
                if(tmp[k]==1) cnt++;
            }
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<endl;
    return 0;

}
