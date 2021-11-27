#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,cnt=0;
        cin>>a>>b>>c>>d;
        if(a%2==0 && b%2==0 && c%2==0 && d%2==0) {cout<<"Yes"<<endl; continue;}
        if(a%2==1 && b%2==1 && c%2==1 && d%2==1) {cout<<"Yes"<<endl; continue;}
        if(a!=0 && b!=0 && c!=0)
        {
        if(a%2==0) cnt++;
        if(b%2==0) cnt++;
        if(c%2==0) cnt++;
        if(d%2==0) cnt++;
        if(cnt==1) {cout<<"Yes"<<endl; continue;}
        cnt=0;
        if(a%2==1) cnt++;
        if(b%2==1) cnt++;
        if(c%2==1) cnt++;
        if(d%2==1) cnt++;
        if(cnt==1) {cout<<"Yes"<<endl; continue;}
        }
        cnt=0;
        if(a==0 || b==0 || c==0)
        {
        if(a%2==1) cnt++;
        if(b%2==1) cnt++;
        if(c%2==1) cnt++;
        if(cnt==0) {cout<<"Yes"<<endl; continue;}
        if(cnt==1 && (d%2==0)) {cout<<"Yes"<<endl; continue;}
        }
        cout<<"No"<<endl;
    }
    return 0;
}
