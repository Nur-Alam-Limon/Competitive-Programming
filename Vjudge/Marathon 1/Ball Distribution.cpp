#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int M,N,s;
    scanf("%lld %lld",&N,&M);
    if(M!=0)
        s=N%M;
    else s=N;
    printf("%lld",s);
}

