#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    char d=0;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]>=48 && c[i]<=57) {cout<<c[i]; continue;}
        for(int j=0;j<a.size();j++)
        {
            if(c[i]==a[j]) {cout<<b[j]; break;}
            if(tolower(c[i])==a[j]) {d=b[j]-32; cout<<d; break;}
        }
    }
    return 0;
}
