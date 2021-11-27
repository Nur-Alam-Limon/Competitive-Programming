#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char x;
    cin>>s;
    int a=0,c=1,m=0;
    a=s.size();
    x=s[0];
    for(int i=1;i<a;i++)
    {
        if(s[i]==x) c++;
        else {c=1; x=s[i];}
        if(m<=c) {m=c;}
    }
    if(m<7) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
