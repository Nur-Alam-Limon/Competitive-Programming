#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,c=0,a=0;
        cin>>n;
        a=n;
        while(n!=1)
        {
            if(n%6==0) {n=n/6; c++;}
            else {n=n*2; c++;}
            if(n==0) {c=-1; break;}
        }
        cout<<c<<endl;
    }
    return 0;
}
