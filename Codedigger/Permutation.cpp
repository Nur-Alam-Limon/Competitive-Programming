#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,c=0;
    cin>>n;
    long long int a[n+6];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]>n) c++;
    for(int j=1;j<n;j++)
    {
        if(a[j]==a[j-1] || a[j]>n) c++;
    }
    cout<<c<<endl;
    return 0;
}
