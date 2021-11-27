#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i,j=0,even=0, ans=-1, rose=0, in=0;
    while(scanf("%d", &N)!=EOF)
    {
      int prime=0;
      even=0;
    for(i=2;i<N;i++)
    {
        if(N%i==0)
        {
            prime=1;
        }
    }
    in++;
    if(prime==1) continue;
    else
        {
            even=(N*(N+1))/2;
            if(even%2==0)
            {
                if(N>rose) rose=N, ans=in;
            }
        }
    }
    if(ans==-1)
    {
        cout<<"No marriage"<<endl;
    }
    else cout<<ans<<endl;
    return 0;
}

