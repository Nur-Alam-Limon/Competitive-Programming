#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a=0,b=0;
    cin>>n;
    long long int ar[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if(ar[n-2]-ar[0]<ar[n-1]-ar[1]) cout<<ar[n-2]-ar[0]<<endl;
    else cout<<ar[n-1]-ar[1]<<endl;
    return 0;
}
