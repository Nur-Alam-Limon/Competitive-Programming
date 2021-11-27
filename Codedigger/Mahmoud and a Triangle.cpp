#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,x=0;
    cin>>n;
    long long int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=1;j<n-1;j++)
    {
        if(a[j]+a[j-1]>a[j+1]) {x++; break;}
    }
    if(x!=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
