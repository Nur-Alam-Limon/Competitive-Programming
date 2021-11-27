#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,z=0,x=0,y=0;
    cin>>n;
    ll a[n+5];
    if(n==1) z=1;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==50) x++;
        if(a[i]==25) y++;
        if(a[i]==25) continue;
        if(a[i]==50 && y>0) {y--;}
        else if(a[i]==50 && y<=0) {z=1;}
        else if(a[i]==100 && y>0 && x>0) {y--; x--;}
        else if(a[i]==100 && y>=3) {y=y-3;}
        else z=1;
    }
    if(z) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
