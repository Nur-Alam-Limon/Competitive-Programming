#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,j;
    cin>>T;
    int M,N,pr[1001],prime=0,y=0,c=0;

        for(int i=2;i<100000;i++)
        {
            c=0;
            int r=sqrt(i);
            for(int k=2;k<=r;k++)
            {
                if(i%k==0)
                    c=1;
            }
                if(c!=1)
                {pr[y]=i;
                y++;
                        }
            if(y==1000) break;

        }
    for(j=0;j<T;j++)
    {
        cin>>M>>N;
        cout<<"Case "<<j+1<<": ";
        cout<<pr[M-1]+pr[N-1]<<endl;
    }
    return 0;
}

