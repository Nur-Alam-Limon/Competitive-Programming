#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b,c,p=0;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a==b && a==c)
        {
            printf("0\n");
        }
        else if((a==b && llabs(b-c)==1)||(a==c && llabs(a-b)==1)||b==c && llabs(b-a)==1)
        {
            printf("0\n");
        }

        else if(a>b && c<b)
        {
            a=a-1;
            c=c+1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(c>b && a<b)
        {
            a=a+1;
            c=c-1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(a>c && b<c)
        {
            a=a-1;
            b=b+1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(b>c && a<c)
        {
            a=a+1;
            b=b-1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(b>a && c<a)
        {
            c=c+1;
            b=b-1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(c>a && b<a)
        {
            c=c-1;
            b=b+1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }



        else if(a==b && c<b)
        {
            c=c+1;
            a=a-1;
            b=b-1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(a==b && c>b)
        {
            c=c-1;
            a=a+1;
            b=b+1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(a==c && b<c)
        {
            b=b+1;
            a=a-1;
            c=c-1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(a==c && b>c)
        {
            b=b-1;
            a=a+1;
            c=c+1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(b==c && a<b)
        {
            a=a+1;
            b=b-1;
            c=c-1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        else if(b==c && a>b)
        {
            a=a-1;
            b=b+1;
            c=c+1;
            p=(llabs(a-b)+llabs(b-c)+llabs(c-a));
            printf("%lld\n",p);
        }
        }
    return 0;
}
