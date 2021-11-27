#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,a=0,b=0,c=0,f=0,p=0;
        cin>>n;
        p=n;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                n=n/i;
                f++;
                if(a==0) a=i;
                else if(b==0) b=i;
            }
            if(a!=0 && b!=0) break;
        }
        if(f<2) {cout<<"NO"<<endl; continue;}
        if(c==0) c=p/(a*b);
        if(a*b*c!=p || c==b || c==a) {cout<<"NO"<<endl; continue;}
        else cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
