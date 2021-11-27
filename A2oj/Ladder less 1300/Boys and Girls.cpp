#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    ll n,m;
    cin>>n>>m;
    if(n==m)
    {
        for(ll i=0;i<n;i++) {cout<<"GB";}
        cout<<endl;
        return 0;
    }
    else if(n>m)
    {
        for(ll i=0;i<m;i++) {cout<<"BG";}
        for(ll i=0;i<n-m;i++) {cout<<"B";}
        cout<<endl;
        return 0;
    }
    else
    {
        for(ll i=0;i<n;i++) {cout<<"GB";}
        for(ll i=0;i<m-n;i++) {cout<<"G";}
        cout<<endl;
        return 0;
    }
}
