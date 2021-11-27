#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    char a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(t--)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j+1]=='G' && a[j]=='B') {a[j+1]='B'; a[j]='G'; j++;}
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<a[k];
    }
    return 0;
}
