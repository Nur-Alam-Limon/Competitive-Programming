#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,p,q,cnt=0;
    cin>>n>>m;
    ll a[n+5],b[n+5],c[n+5];
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    vector<ll>x;
    for(ll i=0;i<n;i++) {cin>>a[i]; if(a[i]!=0) x.push_back(a[i]);}
    for(ll i=0;i<x.size()-1;i++)
    {
        b[i]=x[i]&x[i+1];
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0) cnt++;
        c[i]=cnt;
    }
    while(m--)
    {
        ll flag=0,z=0,y=0;
        cnt=0;
        cin>>p>>q;
        p--;
        q--;
        if(a[p]==0 || a[q]==0) {cout<<"Fou"<<endl; continue;}
        z=c[q]-c[p];
        y=c[p];
        for(ll i=p-y-1;i<q-z;i++)
        {
            if(b[i]!=0) {flag=1; break;}
        }
        if(!flag) cout<<"Fou"<<endl;
        else cout<<"Shi"<<endl;
    }
    return 0;
}
