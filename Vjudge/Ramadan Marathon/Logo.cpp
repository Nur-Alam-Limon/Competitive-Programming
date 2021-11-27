#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,cnt=0;
    scanf("%d",&a);
    printf("*");
    for(int i=2;i<a;i++)
    {
        printf(" ");
    }
    printf("* ");
    for(int j=0;j<a;j++)
    {
        printf("*");
    }
    printf("\n");
    for(int k=2;k<a;k++)
    {
        printf("*");
        for(int l=2;l<a;l++)
        {
            printf(" ");
        }
        printf("* ");
        printf("*");
        for(int l=2;l<a;l++)
        {
            printf(" ");
        }
        printf("* ");
        printf("\n");
    }
    for(int m=0;m<a;m++)
    {
        printf("*");
    }
    printf(" *");
    for(int n=2;n<a;n++)
    {
        printf(" ");
    }
    printf("*");

    printf("\n");

    return 0;
}
