#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a=0,d=0;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s2.size();i++)
    {
        a=0;
        if(s2[i]==' ') continue;
        for(int j=0;j<s1.size();j++)
        {
            if(s2[i]==s1[j]) {a=1; s1[j]=0; break;}
        }
        if(a==0) {d=1; cout<<"NO"<<endl; break;}
    }
    if(d==0) cout<<"YES"<<endl;
    return 0;
}
