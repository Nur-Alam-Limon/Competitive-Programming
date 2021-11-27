#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,z;
    cin>>s;
    z=s;
    long long int l=0,cnt=0;
    l=s.size();
    for(int j=0;j<l;j++)
    {
         if(s[j+1]>=97) {cnt++; break;}
         else if(s[j]>=97) {s[j]=s[j]-32; continue;}
        else if(s[j]<=90) {s[j]=s[j]+32; continue;}
    }
    if(cnt==1) cout<<z<<endl;
    else cout<<s<<endl;
}
