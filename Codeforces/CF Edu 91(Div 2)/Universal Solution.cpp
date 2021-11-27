#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string sr;
        cin>>sr;
        ll l=0,r=0,p=0,s=0;
        char m;
        l=sr.size();
        for(ll i=0;i<l;i++)
        {
            if(sr[i]=='R') r++;
            if(sr[i]=='P') p++;
            if(sr[i]=='S') s++;
        }
        if(l>=3 && r==p && p==s) {cout<<sr<<endl; continue;}
        if(r>=p && r>=s) m='R';
        else if(p>=r && p>=s) m='P';
        else m='S';
        for(ll i=0;i<l;i++)
        {
            if(m=='R') cout<<"P";
            else if(m=='P') cout<<"S";
            else if(m=='S') cout<<"R";
        }
        cout<<endl;
    }
}
