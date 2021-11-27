#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    cin>>T;
    for(long long int i=0;i<T;i++)
    {
        long long int a,p=0;
        cin>>a;
        long long int b[a+5],sum=0,sum1=0;
        for(long long int j=0;j<a;j++)
        {
            cin>>b[j];
            sum1=sum1+b[j];
        }
        p=b[0];
        for(long long int k=0;k<a-1;k++)
        {
            sum=sum+b[k];
            if(sum>p) {p=sum;}
            if(sum<=0) {sum=0;}
        }
        sum=0;
        for(long long int q=1;q<a;q++)
        {
            sum=sum+b[q];
            if(sum>p) {p=sum;}
            if(sum<=0) {sum=0;}
        }
        if(sum1>p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
