#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,cnt=0;
        cin>>a>>b;
        for(int i=9;i<=b;i=i*10+9)
        {
            cnt=cnt+a;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
