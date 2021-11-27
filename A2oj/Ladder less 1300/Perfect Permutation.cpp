#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    if(n%2==1) {cout<<-1<<endl; return 0;}
    if(n%2==0)
    {
        for(ll i=n;i>0;i--) cout<<i<<" ";

        cout<<endl;
    }
    return 0;

}
