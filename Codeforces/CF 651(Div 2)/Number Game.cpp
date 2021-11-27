#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,z=0;
        cin>>n;
        if(n==1) {cout<<"FastestFinger"<<endl; continue;}
        if(n==2) {cout<<"Ashishgup"<<endl; continue;}
        if(n%2==1) {cout<<"Ashishgup"<<endl; continue;}
        for(ll i=3;i<sqrt(n);i=i+2)
        {
            if(n%i==0) {z=1; n=n/i; break;}
        }
        if(z==1 && n==2) {cout<<"FastestFinger"<<endl; continue;}
        else if(z==1) {cout<<"Ashishgup"<<endl; continue;}
        else {cout<<"FastestFinger"<<endl; continue;}
    }
    return 0;
}
