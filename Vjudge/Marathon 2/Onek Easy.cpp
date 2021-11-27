#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf(" %d ",&n);
    for(int i=0;i<n;i++)
    {
        string s;
        int x=0;
        getline(cin,s);
        x=s.size();
        if(x<=10) {cout<<s<<endl;}
        else printf("%c%d%c\n",s[0],x-2,s[x-1]);
    }
}
