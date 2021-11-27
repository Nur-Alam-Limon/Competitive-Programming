#include<bits/stdc++.h>

using namespace std;

long long int arr[1000000];

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(long long int i=0;i<T;i++)
    {
        long long int a,b,c=0,p=0;
        scanf("%lld %lld",&a,&b);
        c=a-b;
        if(c<=b) {printf("Case %lld: impossible\n",i+1); continue;}
        for(long long int j=1;j<=sqrt(c);j++)
        {
            if((c%j)==0)
                {
                    arr[p]=j;
                    if(arr[p]!=(c/j)) {arr[p+1]=c/j; p=p+2;}
                    else p=p+1;
                }
        }
        sort(arr,arr+p);
        printf("Case %lld:",i+1);
        for(long long int k=0;k<p;k++)
        {
            if(arr[k]>b) {printf(" %lld",arr[k]);}
        }
        printf("\n");
    }
    return 0;
}
