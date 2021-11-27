#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,cnt=0,c=0,d=0;
    cin>>a>>b;
    while(a!=b)
    {
        if(b%2==0 && b>a) {b/=2; cnt++;}
        else {b=b+1; cnt++;}
    }
    cout<<cnt<<endl;
    return 0;
}
