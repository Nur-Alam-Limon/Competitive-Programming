#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     int a,arr[100000],x=0;
     cin>>a;
     for(int k=1;k<=a;k++)
     {
         if(a%k==0)
         {
             arr[x]=k;
             x++;
         }
     }
     cout<<"Case "<<i+1<<": ";
     for(int j=0;j<x;j++)
     {
         cout<<arr[j]<<" ";
     }
     cout<<endl;
    }
    return 0;
}
