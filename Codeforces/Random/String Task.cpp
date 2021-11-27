#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0,ar[1000];
    a=s.size();
    for(int k=0;k<a;k++)
    {
        if(s[k]<97) {s[k]=s[k]+32;}
    }
    for(int i=0;i<a;i++)
    {
        if(s[i]=='a' || s[i]=='y' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
        {
            s[i]=0;
        }
    }
    for(int j=0;j<a;j++)
    {
        if(s[j]==0) continue;
        else cout<<"."<<s[j];
    }
    cout<<endl;
    return 0;
}
