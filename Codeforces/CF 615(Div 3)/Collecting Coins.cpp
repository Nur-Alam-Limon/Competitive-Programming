#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,c,n,maxm=0,x=0,y=0,z=0;
        cin>>a>>b>>c>>n;
        if(a==b && a==c)
        {
            if(n==0) {cout<<"YES"<<endl; continue;}
            if(n%3==0) {cout<<"YES"<<endl; continue;}
            else cout<<"NO"<<endl;
        }
        else if(a>=b && a>=c)
        {
            maxm=a;
            x=(maxm-b)+(maxm-c);
            if(x>n) {cout<<"NO"<<endl; continue;}
            if(x==n) {cout<<"YES"<<endl; continue;}
            y=n-x;
            if(y%3==0) {cout<<"YES"<<endl; continue;}
            else cout<<"NO"<<endl;
        }
        else if(c>=b && c>=a)
        {
            maxm=c;
            x=(maxm-b)+(maxm-a);
            if(x>n) {cout<<"NO"<<endl; continue;}
            if(x==n) {cout<<"YES"<<endl; continue;}
            y=n-x;
            if(y%3==0) {cout<<"YES"<<endl; continue;}
            else cout<<"NO"<<endl;
        }
        else
        {
            maxm=b;
            x=(maxm-a)+(maxm-c);
            if(x>n) {cout<<"NO"<<endl; continue;}
            if(x==n) {cout<<"YES"<<endl; continue;}
            y=n-x;
            if(y%3==0) {cout<<"YES"<<endl; continue;}
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}
