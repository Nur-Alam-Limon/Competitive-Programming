#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,c=0,d=0,e=0;
        cin>>n;
        long long int a[n+5],b[n+5];
        for(int i=0;i<n;i++) {cin>>a[i];}
        for(int j=0;j<n;j++) {cin>>b[j];}
        c=*min_element(a,a+n);
        d=*min_element(b,b+n);
        for(int k=0;k<n;k++)
        {
            if((a[k]-c)>=(b[k]-d)) e+=a[k]-c;
            else e+=b[k]-d;
        }
        cout<<e<<endl;
    }
    return 0;
}

