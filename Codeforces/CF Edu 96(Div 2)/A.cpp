#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0;
        cin>>n;
        if(n%3==0) {cout<<n/3<<" "<<0<<" "<<0<<endl; continue;}
        else if(n%5==0) {cout<<0<<" "<<n/5<<" "<<0<<endl; continue;}
        else if(n%7==0) {cout<<0<<" "<<0<<" "<<n/7<<endl; continue;}
        x=(n%7)+7;
        if(n<7) {cout<<-1<<endl; continue;}
        if(x%3==0) {cout<<x/3<<" "<<0<<" "<<(n/7)-1<<endl; continue;}
        else if(x%5==0) {cout<<0<<" "<<x/5<<" "<<(n/7)-1<<endl; continue;}
        else if((x-5)%3==0) {cout<<(x-5)/3<<" "<<1<<" "<<(n/7)-1<<endl; continue;}
        else if((x-3)%5==0) {cout<<1<<" "<<(x-3)/5<<" "<<(n/7)-1<<endl; continue;}
        else cout<<-1<<endl;
    }
    return 0;
}


