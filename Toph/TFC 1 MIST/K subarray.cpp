#include<bits/stdc++.h>

using namespace std;

long long int ar[100000]={0};

int main()
{
    long long int n,sum=0,sum1=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    m=ar[i]+ar[i+1];
    for(int i=0;i<n;i=i+2)
    {
        sum1=ar[i]+ar[i+1];
        if(sum1>m) m=sum1;
    }
}
