#include<stdio.h>
int main()
{
    double v,t,distance;
    printf("Enter the value of time and velocity: ");
    scanf("%lf %lf",&t,&v);
    distance=2*t*v;
    printf("Distance: %lf\n",distance);
    return 0;
}
