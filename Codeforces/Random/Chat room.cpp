#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string x="hello";
    int cnt=0,k=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x[k]) {cnt++; k++;}
    }
    if(cnt==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
