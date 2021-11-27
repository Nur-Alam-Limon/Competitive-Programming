#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,arr[1005],x=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[k-1]==1) {printf("%d\n",k); return 0;}
    while(k!=n)
    {
        if(arr[k]==1) {printf("%d\n",k+1); x=1; return 0;}
        else k++;
    }
    if(x==0)
    {
        for(int j=0;j<k;j++)
        {
            if(arr[j]==1) {printf("%d\n",j+1); return 0;}
        }
    }
    return 0;
}
