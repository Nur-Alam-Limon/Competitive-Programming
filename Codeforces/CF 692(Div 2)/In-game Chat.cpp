#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]==')') cnt++;
            else break;
        }
        if(cnt*2>n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
