#include<bits/stdc++.h>

using namespace std;
long long int arr[1000000];

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b,c,cnt=0,sum=0;
        scanf("%lld %lld %lld",&a,&b,&c);
        for(int j=0;j<a;j++)
        {
            scanf("%lld",&arr[j]);
        }
        sort(arr,arr+a);
        if(arr[0]>b) {printf("0\n"); continue;}
        for(int k=0;k<a;k++)
                {
                    sum=sum+arr[k];
                    cnt++;
                    if(sum>b) break;
                }
            printf("%lld\n",cnt);
    }
}

