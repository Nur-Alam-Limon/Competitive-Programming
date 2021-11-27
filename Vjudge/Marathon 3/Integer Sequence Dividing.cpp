#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n==1) printf("1\n");
    else if(n==2) printf("1\n");
    else if(n==3) printf("0\n");
    else if(n%4==0 || n%4==3) printf("0\n");
    else printf("1\n");
}
