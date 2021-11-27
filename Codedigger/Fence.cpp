#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c=0,d=1;
    cin>>a>>b;
    long long int ar[a+5],arr[a+5]={0};
    for(int i=1;i<=a;i++)
    {
        cin>>ar[i];
        arr[i]=arr[i-1]+ar[i];
    }
    c=arr[b];
    for(int j=b+1;j<=a;j++)
    {
        if((arr[j]-arr[j-b])<c) {c=(arr[j]-arr[j-b]); d=j-b+1;}
    }
    cout<<d<<endl;
    return 0;
}

