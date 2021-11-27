#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,a=0,b=0;
    cin>>N;
    a=N/1000;
    if(N%1000!=0) {a=a+1;}
    cout<<1000*a-N<<endl;
    return 0;
}
