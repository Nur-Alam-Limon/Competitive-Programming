#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t=10;
    while(t--)
    {
        long long int a[42]={0},b,c=0,d=0;
        for(int i=0;i<10;i++)
        {
            cin>>b;
            c=b%42;
            a[c]=1;
        }
        for(int j=0;j<42;j++)
        {
            if(a[j]==1) d++;
        }
        cout<<d<<endl;
    }
    return 0;
}
