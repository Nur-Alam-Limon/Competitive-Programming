#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,x=0,y=0;
        cin>>a>>b>>c;
        for(int i=a;i<=b;i++)
        {
            if(c%i==0) {cout<<i<<" "<<b<<" "<<b<<endl; y=1; break;}
        }
        if(y==1) continue;
        for(int i=a;i<=b;i++)
        {
            x=(c/i)+1;
            y=x*i-c;
            if(a+y<=b) {cout<<i<<" "<<a<<" "<<a+y<<endl; y=1; break;}
        }
        if(y==1) continue;
        for(int i=a;i<=b;i++)
        {
            x=c%i;
            if(a+x<=b) {cout<<i<<" "<<a+x<<" "<<a<<endl; break;}
        }
    }
    return 0;
}

