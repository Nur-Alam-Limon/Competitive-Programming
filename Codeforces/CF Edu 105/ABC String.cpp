#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll cnt=0,cnta=0,cntb=0,cntc=0,flag=0;
        char x;
        string a;
        cin>>a;
        for(ll i=0;i<a.size();i++)
        {
            if(a[i]=='A') cnta++;
            else if(a[i]=='B') cntb++;
            else if(a[i]=='C') cntc++;
        }
        if(cnta>=cntb && cnta>=cntc) x='A';
        else if(cntb>=cnta && cntb>=cntc) x='B';
        else x='C';
        if(a[0]==x){
        for(ll i=0;i<a.size();i++)
        {
            if(a[i]==x) a[i]='(';
            else a[i]=')';
        }}
        else
        {

        for(ll i=0;i<a.size();i++)
        {
            if(a[i]==x) a[i]=')';
            else a[i]='(';
        }}

        for(ll i=0;i<a.size();i++)
        {
            if(a[i]=='(') cnt++;
            else cnt--;
            if(cnt<0) flag=1;
        }
        if(cnt==0 && flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
