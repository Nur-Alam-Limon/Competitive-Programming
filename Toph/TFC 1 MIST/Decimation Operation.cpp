#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N,Q;
    cin>>N>>Q;
    long long int ar[N+5];
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
    }
    while(Q--)
    {
        long long int x,k,a=0,b=0,c=0,j=0,k=0,arr[N],a[N],b[N],sum[N];
        cin>>x>>k;
        arr[j]=x;
        j++;
        while((x/10)!=0)
        {
            arr[j]=x%10;
            j++;
        }
        for(int p=0;p<N;p++)
        {
            a[k]=ar[p];
            k++;
            while((ar[p]/10)!=0)
            {
                a[k]=ar[p]%10;
                k++;
            }
            sum[p]=arr[p]+a[p];
        }
    }
}
