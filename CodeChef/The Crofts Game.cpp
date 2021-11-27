#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cf(pair<ll,ll> x, pair<ll,ll> y){
	return x.first+x.second > y.first+y.second;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        ll a[n+5],b[n+5];
        vector<pair<ll,ll>>v(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        for(ll i=0;i<n;i++) {v[i].first=a[i]; v[i].second=b[i];}
        sort(v.begin(),v.end(),cf);
        for(ll i=0;i<n;i++)
        {
            if(i%2==0) {sum+=v[i].first; cout<<v[i].first<<endl;}
            else {sum-=v[i].second; cout<<v[i].second<<endl;}

        }
        if(sum==0) cout<<"Tie"<<endl;
        else if(sum<0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
