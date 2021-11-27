#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long int l;
    cin>>s;
    l=s.size();
    cout<<s;
    for(int j=l-1;j>=0;j--)
    {
        cout<<s[j];
    }
}
