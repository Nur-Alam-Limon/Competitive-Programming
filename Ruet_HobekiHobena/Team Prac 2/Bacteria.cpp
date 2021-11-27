#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x=0;
    cin>>n;
    n=pow(2,n);
    string s1="00100111";
    string s2="11100100";
    if(n==2) {cout<<"01"<<endl; return 0;}
    if(n==4) {cout<<"0010"<<endl; return 0;}
    for(ll i=0;i<n;i+=8)
    {
        if(!x%2) cout<<s1;
        else cout<<s2;
        x++;
    }
    cout<<endl;
    return 0;
}

