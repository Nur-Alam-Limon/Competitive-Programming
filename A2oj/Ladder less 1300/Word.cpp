#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int u=0,l=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<97) u++;
        else l++;
    }
    if(l>=u)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j]<97) s[j]=s[j]+32;
        }
    }
    else
    {
        for(int k=0;k<s.size();k++)
        {
            if(s[k]>=97) s[k]=s[k]-32;
        }
    }
    cout<<s<<endl;
    return 0;
}
