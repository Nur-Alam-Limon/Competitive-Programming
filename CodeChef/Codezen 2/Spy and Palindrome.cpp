#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s,a;
    cin>>s;
    ll x=0,z=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]>58) a+=s[i];
        else if(s[i]<58)
        {
            x=s[i]-'0';
            i+=2;
            string b;
            if(x==0)
            {
               while(s[i]!='-')
                {
                    i++;
                }
            }
            else{
            while(x--)
            {
                while(s[i]!='-')
                {
                    b+=s[i];
                    i++;
                }
                a+=b;
            }
            }
        }
    }
    if(a.size()==0) {cout<<"Continue"<<endl; return 0;}
    ll p=0;
    ll q=a.size()-1;
    while(p<q)
    {
        if(a[p]==a[q]) {p++; q--;}
        else {z=1; break;}
    }
    if(z) cout<<"Continue"<<endl;
    else cout<<"Return"<<endl;
    return 0;
}


