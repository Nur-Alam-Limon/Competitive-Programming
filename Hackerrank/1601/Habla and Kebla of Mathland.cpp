#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A,B,h,k;
    int habla=0,kebla=0,equa=0;
    double R;
    while(scanf("%lf %lf %lf",&R,&A,&B)!=EOF)
    {
        h=0,k=0;
        h=(A*(A+1))/10+1;
        h=abs(R-h);
        k=(B*(B+1))/10+1;
        k=abs(R-k);
        int a=A, b=B;
        if(h<k)
            habla++;
        else if(k<h)
            kebla++;
            else if(k==h)
            {
                if(a%2==0) habla++;
                if(b%2==0) kebla++;

            }
    }
    if(habla>kebla)
        cout<<"Huhaha"<<endl;
    else if(habla<kebla)
        cout<<"Opss"<<endl;
    else if(habla==kebla)
        cout<<"aha"<<endl;
    return 0;
}

