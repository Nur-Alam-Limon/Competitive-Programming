#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll x,y,z;
    string s;
    cin>>s;
    for(ll i=2;i<s.size();i++)
    {
        x=s[i-2]-65;
        y=s[i-1]-65;
        z=s[i]-65;
        if((x+y)%26!=z)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}


