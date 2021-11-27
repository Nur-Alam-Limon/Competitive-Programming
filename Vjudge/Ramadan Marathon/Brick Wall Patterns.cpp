#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) return 0;
        int f[51],ans=0;
        f[0]=1;
        f[1]=2;
        for(int i=2;i<n;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        printf("%d\n",f[n-1]);
    }
    return 0;
}
