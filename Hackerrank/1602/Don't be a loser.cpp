#include <bits/stdc++.h>

using namespace std;
int a[10010], arr[10010], f[10010];
int main()
{
        int N,i,k,j,x,y,z=-1,n;
        cin>>N>>i;
        for(k=1;k<=N;k++)
        {
            cin>>arr[k];
            f[arr[k]]++;
       }
       for(j=1;j<=i;j++)
       {
           cin>>a[j];
       }
       for(n=1;n<=i;n++)
            {
           if(f[a[n]]>=1)
           {
               cout<<a[n]<<endl;
           }
        else
            cout<<"Not Found"<<endl;

        }
    return 0;
}

