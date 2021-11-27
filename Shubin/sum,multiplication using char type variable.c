#include<stdio.h>
int main()
{
    double num_1,num_2;
    char a,b,c,d;
    printf("Enter the 2 numbers: ");
    scanf("%lf %lf",&num_1,&num_2);
    a='+',b='-',c='*',d='/';
    printf("%.2lf %c %.2lf = %.2lf \n",num_1,a,num_2,num_1+num_2);
    return 0;
}
