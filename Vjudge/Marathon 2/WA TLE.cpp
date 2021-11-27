#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        long long int n,n1=0,n2=0,n3=0,m1=0,m2=0,m3=0,sum=0;
        scanf("%lld",&n);
        n=n-1;

            n1=((n/3)*3);
            m1=(n1*(n1+3))/6;

            n2=((n/5)*5);
            m2=(n2*(n2+5))/10;

            n3=(n/15);
            n3=n3*15;
            m3=(n3*(n3+15))/30;

        sum=(m1+m2)-m3;
        printf("%lld\n",sum);
    }
}
