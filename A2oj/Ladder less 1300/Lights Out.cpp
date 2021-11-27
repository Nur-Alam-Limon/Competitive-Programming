#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a[4][4],b=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=1;
        }
    }
    for(int k=0;k<3;k++)
    {
        for(int m=0;m<3;m++)
        {
            cin>>b;
            if(b%2==1)
            {
                a[k][m]=1-a[k][m];
                a[k+1][m]=1-a[k+1][m];
                a[k-1][m]=1-a[k-1][m];
                a[k][m+1]=1-a[k][m+1];
                a[k][m-1]=1-a[k][m-1];
            }
        }
    }
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            cout<<a[x][y];
        }
        cout<<endl;
    }
    return 0;
}
