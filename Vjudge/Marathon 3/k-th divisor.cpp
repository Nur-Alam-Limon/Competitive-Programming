#include<bits/stdc++.h>

using namespace std;

long long int arr[10000000];

int main()
{
    long long int a,b,k=0;
    scanf("%lld %lld",&a,&b);
    for(int i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
                arr[k]=i;
                if((a/i)!=arr[k]) {arr[k+1]=a/i; k=k+2;}
                else k=k+1;
        }
    }
    sort(arr,arr+k);
    if(b>k) printf("-1\n");
    else printf("%lld\n",arr[b-1]);
}
