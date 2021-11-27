#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d,e=0,f=0,g=0;
        cin>>a>>b>>c>>d;
        if(a*b==1) {cout<<c<<endl; continue;}
        if(d%2==0 && d/2<=c) {cout<<a*b*(d/2)<<endl; continue;}
        if(d/2>c) {cout<<a*b*c<<endl; continue;}
        if(d%2==1 && (d+1)/2<=c)
        {
            e=a*b;
            if(e%2==0) {g=(e/2)*((d+1)/2); f=(e/2)*((d-1)/2); cout<<g+f<<endl; continue;}
            if(e%2==1) {g=((e+1)/2)*((d+1)/2); f=((e-1)/2)*((d-1)/2); cout<<g+f<<endl; continue;}
        }
    }
    return 0;
}
