#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x=0,y=0,z=0;
    cin>>n;
    int a[n+5][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++) {cin>>a[i][j];}
    }
    for(int k=0;k<n;k++)
    {
        x=x+a[k][0];
        y=y+a[k][1];
        z=z+a[k][2];
    }
    if(x==0 && y==0 && z==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
