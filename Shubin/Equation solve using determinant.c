#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d=0,x=0,y=0;
    printf("Value of a1,a2,b1,b2,c1,c2: ");
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);
    d=(a1*b2-a2*b1);
    if((int)d==0)
    {
        printf("value of x,y can't be determined");
    }
    else
       {
        x=(c1*b2-c2*b1)/d;
        y=(a1*c2-a2*c1)/d;
    printf("The value of x,y is: %.2lf \n %.2lf",x,y);
       }
    return 0;
}
