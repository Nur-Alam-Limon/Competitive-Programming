#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,a,b,c,d,cnt=0,z=0;
    cin>>n>>a>>b>>c>>d;
    string s;
    cin>>s;
    if(a==c && b==d) {cout<<0<<endl; return 0;}
    for(ll i=0;i<s.size();i++)
    {
        cnt++;
        if(a<c && s[i]=='E') a++;
        else if(a>c && s[i]=='W') a--;
        if(b<d && s[i]=='N') b++;
        else if(b>d && s[i]=='S') b--;
        if(a==c && b==d) {z=1; break;}
    }
    if(z) cout<<cnt<<endl;
    else cout<<-1<<endl;
    return 0;
}
