#include<bits/stdc++.h>

using namespace std;

int main()
{
    double n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+((double)1)/((double)i);
    }
    cout<<setprecision(12)<<fixed<<sum<<endl;

    return 0;
}
