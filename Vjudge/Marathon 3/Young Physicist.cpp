#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(int m=0;m<n;m++)
    {
        sum1=sum1+arr[m][0];
    }
    if(sum1==0) printf("YES\n");
    else printf("NO\n");
}
