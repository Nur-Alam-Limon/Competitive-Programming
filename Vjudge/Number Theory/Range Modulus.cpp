#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int ar[a+5];
    for(int i=1;i<=a;i++)
    {
        cin>>ar[i];
    }
    while(b--)
    {
        long long int d,e,f=0,ans=0,g=0,sum=0,h=0,x=0,y=0;
        cin>>d>>e;
        for(int j=d;j<=e;j++)
        {
            f+=ar[j];
        }
        if(f%c==0) {ans=e-d+1;}
        if(ans!=0) {cout<<ans<<endl; continue;}
        g=f%c;
        for(int k=d;k<=e;k++)
        {
            sum+=ar[k];
            if(sum==g) {h=k-d+1;}
            if(sum>g) break;
        }
        sum=0;
        for(int l=e;l>=d;l--)
        {
            sum+=ar[l];
            if(sum==g) {x=l-d+1;}
            if(sum>g) break;
        }
        if(ans==0 && x<=h) {ans=x;}
        else if(ans==0 && x>h) {ans=h;}
        cout<<ans<<endl;
    }
    return 0;
}
