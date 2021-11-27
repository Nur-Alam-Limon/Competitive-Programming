#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool sortsec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,a=0,b=0,f1=0,f2=0,p,q;
        cin>>n>>k;
        vector<pair<ll,ll>>x,y;
        for(ll i=0;i<n;i++)
        {
            cin>>p>>q;
            x.push_back(make_pair(p,q));
            y.push_back(make_pair(p,q));
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end(),sortsec);
        for(ll i=0;i<n;i++)
        {
            a=0;
            for(ll j=0;j<n;j++)
            {
                if((abs(x[i].first-x[j].first)+abs(x[i].second-x[j].second))>k) {a=1; break;}
            }
            if(a==0) {f1=1; break;}
        }
        for(ll i=0;i<n;i++)
        {
            b=0;
            for(ll j=0;j<n;j++)
            {
                if((abs(y[i].first-y[j].first)+abs(y[i].second-y[j].second))>k) {b=1; break;}
            }
            if(b==0) {f2=1; break;}
        }
        if(f1==1 || f2==1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}

