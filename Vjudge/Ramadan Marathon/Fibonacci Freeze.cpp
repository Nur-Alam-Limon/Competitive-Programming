#include<bits/stdc++.h>

using namespace std;

string arr[100000];

int main()
{
    long long int n,a[5005];
    while(cin>>n)
    {
    arr[0]='0'; arr[1]='1'; arr[2]='1';
    for(int i=3;i<=5000;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
        cout<<arr[n]<<endl;

    }
    return 0;
}
