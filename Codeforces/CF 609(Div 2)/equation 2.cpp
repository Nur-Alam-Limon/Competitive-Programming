#include<bits/stdc++.h>

using namespace std;

long long int arr[1000005];

int main()
{
    long long int p,i=0;
    scanf("%lld",&p);
    int arr[]={8,9,10,12,14,15,16,18,20,22,24,25};
    for(int j=0;j<12;j++)
    {
    i=0;
    i=p+arr[j];
    if((i%2)==0 || (i%3)==0 || (i%5)==0 || (i%7)==0) {printf("%lld %d\n",i,arr[j]); break;}
    else continue;
    }
    return 0;
}



