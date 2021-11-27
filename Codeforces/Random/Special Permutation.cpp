#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=1;
        cin>>n;
        for(ll i=n;i>0;i--)
        {
            if(i==c) {cout<<i-1<<" "<<i<<" "; i--;}
            else cout<<i<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}
