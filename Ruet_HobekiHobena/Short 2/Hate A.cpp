#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll cnt=0,i=0,j=0,flag=0;
    string s,x;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='a') cnt++;
    }
    if(!cnt) {cout<<s<<endl; return 0;}

    if(cnt%2!=0 || s.size()==1) {cout<<":("<<endl; return 0;}
    i=0;
    j=s.size()-(cnt/2);
    while(i<s.size() && j<s.size())
    {
        if(s[i]=='a') {i++; continue;}
        else if(s[i]==s[j]) {j++;}
        else flag=1;
        i++;
    }
    if(flag) cout<<":("<<endl;
    else
    {
        j=s.size()-(cnt/2);
        for(i=0;i<j;i++) cout<<s[i];
    }
    cout<<endl;
    return 0;
}
