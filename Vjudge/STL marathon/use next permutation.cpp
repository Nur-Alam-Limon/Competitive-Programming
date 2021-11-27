#include<bits/stdc++.h>

using namespace std;

long long int ar[1000];

int main()
{
    int T,z=1;
    cin>>T;
    while(T--)
    {
        long long int a,x=10,b=0,sum=0,y=0;
        cin>>a;
        for(int j=0;j<10;j++)
        {
            ar[j]=0;
        }
        while(a>0)
        {
            ar[x]=a%2;
            a=a/2;
            x++;
        }
        reverse(ar+10,ar+x);
        next_permutation(ar,ar+x);
        for(int i=x-1;i>0;i--)
        {
            if(ar[i]!=0) {sum=sum+(ar[i]*pow(2,y));}
            y++;
        }
        cout<<"Case "<<z<<": "<<sum<<endl;
        z++;
    }
}
