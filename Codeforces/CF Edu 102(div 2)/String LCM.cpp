#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2;
        ll x,y,z=0,p=0,j=0,f=0;
        x=s1.size();
        y=s2.size();
        z=__gcd(x,y);
        z=(x*y)/z;
        p=z/x;
        while(p--)
        {
            s3+=s1;
        }
        p=z/x;
        while(p--)
        {
            for(ll i=0;i<s1.size();i++)
            {
                if(s3[j]!=s1[i]) {f=1; break;}
                j++;
            }
            if(f) break;
        }
        p=z/y;
        j=0;
        while(p--)
        {
            for(ll i=0;i<s2.size();i++)
            {
                if(s3[j]!=s2[i]) {f=1; break;}
                j++;
            }
            if(f) break;
        }
        if(f) cout<<-1<<endl;
        else cout<<s3<<endl;
    }
    return 0;
}

