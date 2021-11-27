#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
    int num,f=0,l=0,sum=0;
    cin>>num;

    l=num%10;
    f=num;
    while(num>=10)
    {
        num=num/10;
    }
    f=num;

    sum=f+l;

    cout<<sum<<endl;
    }
    return 0;
}

