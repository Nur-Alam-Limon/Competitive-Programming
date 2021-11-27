#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    map<string,ll>a;
    while(n--)
    {
        string s;
        cin>>s;
        if(a[s]==0) cout<<"OK"<<endl;
        else cout<<s<<a[s]<<endl;
        a[s]++;
    }
    return 0;
}
