#include<bits/stdc++.h>

using namespace std;

int arr[42];

int main()
{
    for(int i=0;i<10;i++)
    {
        int a[10],c=0;
        for(int j=0;j<10;j++)
        {
            scanf("%d",&a[j]);
        }
        sort(a,a+10);
        for(int k=0;k<10;k++)
        {
            arr[a[k]%42]++;
        }
        for(int m=0;m<42;m++)
        {
            if(arr[m]>0) c++;
        }
        printf("%d\n",c);
    }
}

