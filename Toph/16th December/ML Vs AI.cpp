#include<bits/stdc++.h>

using namespace std;

long long int m[1000005],n[1000005];

int main()
{
    long long int s,sum=0,avg=0,cnt=0;
    scanf("%lld",&s);
    for(int i=0;i<s;i++)
    {
        scanf("%lld %lld",&m[i],&n[i]);
    }
    for(int j=0;j<s;j++)
    {
        sum=sum+m[j];
    }
    avg=sum/s;
    if(sum%s!=0) avg=avg+1;
    for(int k=0;k<s;k++)
    {
        double x;
        x=(double) (m[k]*100)/(double) n[k];
        if(m[k]>=150 && m[k]>=avg && x>=70.00)
        cnt++;
    }
    printf("%lld\n",cnt);
    return 0;
}
