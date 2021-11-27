#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    scanf("%lld ",&T);
    for(int i=0;i<T;i++)
    {
        string a;
        getline(cin,a);
        long long int length=a.size();
        long long int L=0,R=0,U=0,D=0,num=0;
        for(int k=0;k<=length;k++)
        {
            if(a[k]=='L')
                L++;
            else if(a[k]=='R')
                R++;
            else if(a[k]=='U')
                U++;
            else if(a[k]=='D')
                D++;
        }
        while(L!=R && L>=R)
        {
            L--;
        }
        while(L!=R && L<=R)
        {
            R--;
        }
        while(U!=D && U>=D)
        {
            U--;
        }
        while(U!=D && U<=D)
        {
            D--;
        }

        if(R==0 && U==0 && D==0 || L==0 && U==0 && D==0 || R==0 && L==0 && D==0 || R==0 && U==0 && L==0)
        {
            printf("0\n");
        }
        else if(L!=0 && R!=0 && U!=0 && D!=0)
        {
            num=L+R+U+D;
            printf("%lld\n",num);
            while(L!=0) {printf("L"); L--;}
            while(U!=0) {printf("U"); U--;}
            while(R!=0) {printf("R"); R--;}
            while(D!=0) {printf("D"); D--;}
            printf("\n");
        }
        else if(L==0 && R==0)
        {
            num=2;
            printf("%lld\n",num);
            printf("UD\n");
        }
        else if(U==0 && D==0)
        {
            num=2;
            printf("%lld\n",num);
            printf("RL\n");
        }
    }
    return 0;
}
