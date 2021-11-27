#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     int a,sum=0;
     cin>>a;
     sum=a%3;
     if(sum==0)
     cout<<a<<" is a multiple of 3"<<endl;
        else cout<<a<<" is not a multiple of 3"<<endl;
    }
    return 0;
}
