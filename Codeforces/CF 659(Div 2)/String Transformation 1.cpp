#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,x=0,y=0,z=0;
        cin>>a;
        string b,c;
        cin>>b>>c;
        for(int i=0;i<a;i++)
        {
            if(c[i]<b[i]) {cout<<-1<<endl; x=1; break;}
            if(c[i]==b[i]) y++;
        }
        if(x==1) continue;
        for(int j=1;j<a;j++)
        {
            if(b[j]==b[j-1]) y++;
        }
        z=a-y;
        if(z>=0) cout<<z<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
