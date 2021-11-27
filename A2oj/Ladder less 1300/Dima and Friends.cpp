#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0,x=0;
    cin>>n;
    int a[n+5],b[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    b[0]=1;
    for(int j=1;j<=100;j++)
    {
        b[j]=b[j-1]+n+1;
        if(b[j]>sum && b[j]<=sum+5) x++;
    }
    cout<<5-x<<endl;
    return 0;
}
