#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,cnt=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') cnt++;
            if(cnt>=1) {if(s[i]==')') cnt--;}
        }
        cout<<cnt<<endl;
    }
    return 0;
}
