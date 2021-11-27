#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int cnt=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
