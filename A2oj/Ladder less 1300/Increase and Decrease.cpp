#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,sum=0;
    cin>>a;
    long long int ar[a+5];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    if(sum%a==0) cout<<a<<endl;
    else cout<<a-1<<endl;
    return 0;
}
