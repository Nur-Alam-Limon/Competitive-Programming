#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int ar[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int j=0;j<(1<<n);j++)
    {

        cout<<"{";
        for(int k=0;k<n;k++)
        {
            if(j&(1<<k)) cout<<ar[k];
        }
        cout<<"}"<<endl;
    }
}
