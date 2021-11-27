#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int A,B,M,s,p,q,r;
    scanf("%llu %llu %llu",&A,&B,&M);
    if(M>=1)
    {
        s=0;
        A=A%M;
        while(B>0)
        {
            if(B%2==1)
                {s=(s+A)%M;}

            A=(A*2)%M;
            B=B/2;
        }
        r=s%M;
        printf("%llu\n",r);
    }
}



