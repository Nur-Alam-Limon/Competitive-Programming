#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x=0,l=0,y=0,z=0;
        cin>>n;
        string s,g;
        cin>>s;
        g=s;
        for(int w=0;w<n-6;w++)
        {
            if(s[w]=='a' && s[w+1]=='b' && s[w+2]=='a' && s[w+3]=='c' && s[w+4]=='a' && s[w+5]=='b' && s[w+6]=='a')
            {
                x++;
                l=w;
            }
        }
        if(x>1) {cout<<"NO"<<endl; continue;}
        for(int i=0;i<n-6;i++)
        {
            if(x>0) break;
            if((s[i]=='a' || s[i]=='?') && (s[i+1]=='b' || s[i+1]=='?') && (s[i+2]=='a' || s[i+2]=='?') && (s[i+3]=='c' || s[i+3]=='?') && (s[i+4]=='a' || s[i+4]=='?') && (s[i+5]=='b'|| s[i+5]=='?') && (s[i+6]=='a' || s[i+6]=='?'))
            {
                l=i;
                y=0;
                g[l]='a';
                g[l+1]='b';
                g[l+2]='a';
                g[l+3]='c';
                g[l+4]='a';
                g[l+5]='b';
                g[l+6]='a';
                for(int w=0;w<n-6;w++)
                {
                    if(g[w]=='a' && g[w+1]=='b' && g[w+2]=='a' && g[w+3]=='c' && g[w+4]=='a' && g[w+5]=='b' && g[w+6]=='a')
                    {
                        y++;
                    }
                }
                if(y==1) break;
                else {g=s;}
            }
        }
        if(x!=1 && y!=1) {cout<<"NO"<<endl; continue;}
        else cout<<"YES"<<endl;
        for(int j=0;j<n;j++)
        {
            if(g[j]=='?') g[j]='d';
            cout<<g[j];
        }
        cout<<endl;
    }
    return 0;
}
