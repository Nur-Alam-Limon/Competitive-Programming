#include<bits/stdc++.h>

using namespace std;

long long int arr[40],ar[40],arrr[40];

int main()
{
    string a,b;
    long long int sum=0,x=0,y=0,maxm=0,z=0;
    cin>>a;
    cin>>b;
    x=a.size();
    y=b.size();
    for(int i=0;i<x;i++)
    {
        arr[a[i]-'a']++;
    }
    for(int j=0;j<y;j++)
    {
        ar[b[j]-'a']++;
    }
    for(int k=0;k<26;k++)
    {
        if(ar[k]<=arr[k]) {arrr[k]=ar[k];}
        else if(ar[k]>arr[k]) {arrr[k]=arr[k];}
    }
    maxm=arrr[0];
    for(int l=0;l<26;l++)
    {
        if(arrr[l+1]>arrr[l]) maxm=arrr[l];
    }
    printf("%lld\n",maxm);
    for(int p=0;p<26;p++)
    {
        z=maxm%(arrr[p]);
        if(z==0) sum=sum+arrr[p];
        z=0;
    }
    printf("%lld\n",sum);
    return 0;
}
