#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s2,s1;
    cin>>s1>>s2;
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i]) cout<<0;
        else cout<<1;
    }
    cout<<endl;
    return 0;
}
