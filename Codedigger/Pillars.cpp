#include<bits/stdc++.h>

using namespace std;

long long int a[500000];

int main()
{
    long long int n,c=0,b=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==n) {d=i;}
    }
    for(int j=1;j<=d;j++)
    {
        if(a[j]<a[j-1]) c=1;
    }
    for(int k=d+1;k<n;k++)
    {
        if(a[k]>a[k-1]) c=1;
    }
    if(c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
