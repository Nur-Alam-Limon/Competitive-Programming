#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,sum=0;
        cin>>a>>b;
        long long int c[a+5],d[a+5];
        for(int i=0;i<a;i++) {cin>>c[i];}
        for(int j=0;j<a;j++) {cin>>d[j];}
        sort(c,c+a);
        sort(d,d+a);
        for(int k=0;k<b;k++)
        {
            if(c[k]<d[a-k-1]) {c[k]=d[a-k-1];}
        }
        for(int l=0;l<a;l++)
        {
            sum+=c[l];
        }
        cout<<sum<<endl;
    }
    return 0;
}
