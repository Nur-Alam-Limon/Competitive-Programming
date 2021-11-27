#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a[10005],b[10005],l=0,r=0,u=0,d=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int j=0;j<n;j++)
    {
        u=0,d=0,l=0,r=0;
        for(int k=0;k<n;k++)
        {
            if(a[j]==a[k] && b[j]>b[k]) u=1;
            if(a[j]==a[k] && b[j]<b[k]) d=1;
            if(b[j]==b[k] && a[j]>a[k]) l=1;
            if(b[j]==b[k] && a[j]<a[k]) r=1;
        }
        if(u==1 && d==1 && l==1 && r==1) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
