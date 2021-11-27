#include<stdio.h>
int main()
{
    int i,n,p=0;
    {
    for(n=1;n<=20;n++)
        {
            for(i=1;i<=10;i++)
            {
             p=p+n;
        printf("%d x %d = %d \n",n,i,p);
        }
        p=0;
        }
    }
    return 0;
}

