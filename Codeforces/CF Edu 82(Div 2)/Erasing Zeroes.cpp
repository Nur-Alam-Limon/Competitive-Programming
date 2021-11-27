#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    string s;
    int a=0,x=0,y=0,cnt=0;
    cin>>s;
    a=s.size();
    for(int i=0;i<a;i++)
    {
        if(s[i]=='1')
        {
            x=i;
            break;
        }
    }
    for(int j=a-1;j>x;j--)
    {
        if(s[j]=='1')
        {
            y=j;
            break;
        }
    }
    for(int k=x;k<y;k++)
    {
        if(s[k]=='0')
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}
