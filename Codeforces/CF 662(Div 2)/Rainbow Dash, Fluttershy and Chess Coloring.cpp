#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        if(a<=2) {cout<<a<<endl; continue;}
        else cout<<(a/2)+1<<endl;
    }
    return 0;
}
