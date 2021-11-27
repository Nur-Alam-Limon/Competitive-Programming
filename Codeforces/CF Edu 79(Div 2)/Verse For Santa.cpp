#include<bits/stdc++.h>

using namespace std;

long long int arr[100005];

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b,sum=0,x=0,y=1,z=0,p=1;
        scanf("%lld %lld",&a,&b);
        for(int j=0;j<a;j++)
        {
            scanf("%lld",&arr[j]);
        }
        for(int k=0;k<a;k++)
        {
            sum=sum+arr[k];
        }
        if(sum<=b) {printf("0\n"); continue;}

            z=arr[0];
            for(int l=1;l<a;l++)
            {
                if(arr[l]>z) {z=arr[l]; y=l+1;}
            }
            sum=0;
            for(int m=0;m<y-1;m++)
            {
                sum=sum+arr[m];
            }
            if(sum<=b) {printf("%lld\n",y); continue;}

                x=arr[0];
                for(int n=0;n<y-1;n++)
                {
                    if(arr[n]>=x) {x=arr[n]; p=n+1;}
                }
                printf("%lld\n",p);
            }
    return 0;
}
