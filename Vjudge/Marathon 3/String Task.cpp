#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long int l;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        if(s[i]<=90) {s[i]=s[i]+32;}
    }
    for(int j=0;j<l;j++)
    {
        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='y') {s[j]=0;}
    }
    for(int k=0;k<l;k++)
    {
        if(s[k]!=0) cout<<"."<<s[k];
    }
}
