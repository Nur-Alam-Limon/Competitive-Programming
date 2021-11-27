#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    scanf(" %d ",&n);
    string s[50],a[105];
    for(int i=0;i<n*2;i++)
    {
        getline(cin,s[i]);
    }
    scanf(" %d ",&q);
    for(int k=0;k<q;k++)
    {
        getline(cin,a[k]);
    }
    for(int j=0;j<q;j++)
    {
        for(int x=0;x<n*2;x=x+2)
        {
            if(a[j]==s[x]) cout<<s[x+1]<<endl;
        }
    }
    return 0;
}
