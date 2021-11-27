#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x=0,z=0,t=0;
    cin>>n>>m;
    int ar[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%m==0) x=ar[i]/m;
        else x=(ar[i]/m)+1;
        if(x>=z)
        {
            z=x;
            t=i+1;
        }
    }

    cout<<t<<endl;
    return 0;

}
