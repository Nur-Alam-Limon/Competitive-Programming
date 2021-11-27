#include<stdio.h>
int main()
{
    double loan,interest,year,total,yearly;
    printf("Enter loan amount: ");
    scanf("%lf",&loan);
    printf("Enter interest amount: ");
    scanf("%lf",&interest);
    printf("Enter year: ");
    scanf("%lf",&year);
    total=loan+((loan*interest)/100);
    yearly=total/year;
    printf("Total amount: %lf \n",total);
    printf("Yearly amount: %lf \n",yearly);
    return 0;
}
