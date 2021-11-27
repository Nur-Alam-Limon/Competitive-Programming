#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,cnt=0,k=0,p=0;
    scanf("%lld %lld",&a,&b);
    long long int arr[2000],sum[2000],ar[2000];
    for(long long int i=0;i<a;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(long long int m=0;m<a;m++)
    {
        arr[m]=ar[m];
    }
    for(long long int j=0;j<a-1;j++)
    {
        if((arr[j+1]-arr[j])!=b)
        {
            if((arr[j]+b)>arr[j+1])
            {
                    sum[k]=(arr[j]+b)-arr[j+1];
                    arr[j+1]=arr[j+1]+sum[k];
                    cnt++;
                    k++;
            }
            else if((arr[j]+b)<arr[j+1])
            {
                    sum[k]=(arr[j+1]-(arr[j]+b));
                    arr[j+1]=arr[j+1]-sum[k];
                    cnt++;
                    k++;
            }
        }
    }
    if(cnt==0) {printf("0\n"); return 0;}
    else printf("%lld\n",cnt);
    for(long long int n=1;n<a;n++)
    {
        if((ar[n]-ar[n-1])!=b)
        {
            if(arr[n]==ar[n]) continue;
            else if(arr[n]>ar[n])
            {
                    printf("+ %lld %lld\n",n+1,sum[p]);
                    p++;
            }
            else {printf("- %lld %lld\n",n+1,sum[p]); p++;}
        }
    }
    return 0;
}
