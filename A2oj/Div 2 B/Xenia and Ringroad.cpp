#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,t=0;
    cin>>a>>b;
    long long int ar[b+5];
    for(int i=0;i<b;i++)
    {
        cin>>ar[i];
    }
    t=ar[0]-1;
    for(int j=1;j<b;j++)
    {
        if(ar[j]>=ar[j-1]) {t+=ar[j]-ar[j-1];}
        else t+=a-ar[j-1]+ar[j];
    }
    cout<<t<<endl;
    return 0;
}
