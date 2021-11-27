#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,cnt=0;
    cin>>n;
    while(n)
    {
        n=(n & (n-1));
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
