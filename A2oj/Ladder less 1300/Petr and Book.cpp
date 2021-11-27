#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a[9],sum=0,x=0,y=0,j=0;
    cin>>n;
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    while(y!=1)
    {
        sum+=a[j];
        if(sum>=n) {y=1; x=j+1;}

        if(j==6) {j=0;}
        else j++;
    }
    cout<<x<<endl;
    return 0;
}
