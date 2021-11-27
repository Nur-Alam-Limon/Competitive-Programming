#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N,m=0,n=1,P=0;
    cin>>N;
    P=N;
    while(n!=0)
    {
       if(N/10==0) n=0;
       m=m+N%10;
       N=N/10;
    }
    if(P%m==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
