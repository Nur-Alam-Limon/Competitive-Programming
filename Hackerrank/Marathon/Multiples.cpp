#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     int x,N,arr[1000],count=0;
     cin>>x>>N;
     for(int k=1;k<N;k++)
     {
         if(x*k>N)
            break;
         else
         arr[k]=x*k;
         count++;
     }
     cout<<"Case "<<i+1<<": ";
     for(int j=1;j<=count;j++)
     {cout<<arr[j]<<" ";}
     cout<<endl;
    }
    return 0;
}


