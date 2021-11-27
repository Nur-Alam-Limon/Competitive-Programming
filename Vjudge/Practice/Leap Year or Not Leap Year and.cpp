#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    ll x=0;
    while(cin>>s)
    {
        ll r1=0,r2=0,r3=0,r4=0,r5=0,l=0,p=0;
        if(x!=0) cout<<endl;
        x++;
        for(ll i=0;i<s.size();i++)
        {
            r1=(r1*10+(s[i]-'0'))%400;
        }
        if(r1==0) {cout<<"This is leap year."<<endl; l=1; p=1;}
        if(r1!=0)
        {
            for(ll i=0;i<s.size();i++)
            {
                r2=(r2*10+(s[i]-'0'))%4;
            }
            for(ll i=0;i<s.size();i++)
            {
                r3=(r3*10+(s[i]-'0'))%100;
            }
            if(r2==0 && r3!=0) {cout<<"This is leap year."<<endl; l=1; p=1;}
        }
        for(ll i=0;i<s.size();i++)
        {
            r4=(r4*10+(s[i]-'0'))%15;
        }
        if(r4==0) {cout<<"This is huluculu festival year."<<endl; p=1;}
        for(ll i=0;i<s.size();i++)
        {
            r5=(r5*10+(s[i]-'0'))%55;
        }
        if(r5==0 && l==1) {cout<<"This is bulukulu festival year."<<endl; p=1;}
        if(p==0) cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
