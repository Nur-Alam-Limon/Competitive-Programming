#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int k,a=0,sum=19;
    cin>>k;
    sum=19+(k-1)*9;
    a=(int)log10(sum)-1;
    sum+=a*9;
    cout<<sum<<endl;
    return 0;
}
