#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,j=0,y=0;
    cin>>n>>m;
    long long int ar[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    while(1)
    {
        long long int x;
        cin>>x;
        if(x==0) break;
        if(x==1 && j>0) {j--;}
        else if(x==2 && j<n-1) {j++;}
        else if(x==3 && ar[j]>0 && y==0) {ar[j]=ar[j]-1; y=1;}
        else if(x==4 && ar[j]<m && y==1) {ar[j]+=1; y=0;}
    }
    for(int k=0;k<n;k++) cout<<ar[k]<<" ";
    cout<<endl;
    return 0;
}

