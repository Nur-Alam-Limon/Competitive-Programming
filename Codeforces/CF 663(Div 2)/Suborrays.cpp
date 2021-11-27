#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,y=0,z=1;
        cin>>n;
        if(n==1) {cout<<1<<endl; continue;}
        if(n==2) {cout<<1<<" "<<2<<endl; continue;}
        if(n%2==0) x=(n/2)+1;
        else x=(n/2)+1;
        y=x-1;
        while(z){
        if(x<=n) {cout<<x<<" "; x++;}
        if(y>0) {cout<<y<<" "; y--;}
        if(y==0 && x>n) break;
        }
        cout<<endl;
    }
    return 0;
}
