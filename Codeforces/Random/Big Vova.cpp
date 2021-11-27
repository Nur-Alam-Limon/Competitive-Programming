#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n;
        vector<ll>a;
        for(ll i=0;i<n;i++) {cin>>p; a.push_back(p);}
        sort(a.begin(),a.end(),greater<int>());
        cout<<a[0]<<" ";
        ll temp=a[0];
        a.erase(a.begin());
        while(a.size()>0)
        {
            ll it=-1;
            ll m=0;
            for(ll i=0;i<a.size();i++)
            {
                ll x=__gcd(temp,a[i]);
                if(x>m)
                {
                    m=x;
                    it=i;
                }
            }
            cout<<a[it]<<" ";
            temp=__gcd(a[it],temp);
            a.erase(a.begin()+it);
        }
        cout<<endl;
    }
    return 0;
}
