#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        string s;
        cin>>s;
        cout<<"Case "<<x<<": ";
        if(s[4]=='s') {cout<<s<<endl; continue;}
        cout<<"https://";
        for(ll i=7;i<s.size();i++) cout<<s[i];
        cout<<endl;
    }
    return 0;
}

