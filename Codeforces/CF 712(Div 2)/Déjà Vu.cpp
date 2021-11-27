#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll flag=0,x=0,y=0,z=0;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!='a') flag=1;
        }
        if(!flag) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            x=s.size()-1;
            y=0;
            while(x>=y)
            {
                if(s[x]!='a') break;
                x--;
                y++;
            }
            for(ll i=0;i<y;i++) cout<<s[i];
            cout<<"a";
            for(ll i=y;i<s.size();i++) cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}
