#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    string a;
    scanf(" %d ",&n);

    map<string, string> s;
    string p,q;
    for(int i=0;i<n;i++)
    {
        getline(cin,p);
        getline(cin,q);
        s[p]=q;
    }

    scanf(" %d ",&x);

    for(int j=0;j<x;j++)
    {
        getline(cin,a);
            cout<<s[a]<<endl;
    }
    return 0;
}
