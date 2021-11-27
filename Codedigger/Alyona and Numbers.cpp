#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int a,b,sum=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        sum+=(b+(i%5))/5;
    }
    cout<<sum<<endl;
    return 0;
}
