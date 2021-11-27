#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        deque<string> x;
        string b[10000]={0};
        int a=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='[' || s[i]!=']') {b[a]=b[a]+s[i];}
            else a++;
        }
        cout<<x<<endl;
    }
}
