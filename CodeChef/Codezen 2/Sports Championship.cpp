#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[7],b[7];
        for(ll i=0;i<5;i++) {cin>>a[i]; b[i]=a[i];}
        sort(b,b+5,greater<int>());
        if(a[0]==b[0]) cout<<"Champions"<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}

