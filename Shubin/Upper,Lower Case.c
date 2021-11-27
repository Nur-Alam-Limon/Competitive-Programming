#include<stdio.h>
int main()
{
    char num;
    printf("Enter the letter: ");
    scanf("%c",&num);
    if(num>'a' && num<'z')
       {
           printf("%c is lower case \n",num);
       }
    else if(num>'A' && num<'Z')
        {
            printf("%c is upper case \n",num);
        }
    return 0;
}
