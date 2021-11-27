#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,x=0;
    string a,b;
    a="I hate ";
    b="I love ";
    scanf("%lld",&n);
    x=n;
    for(int i=0;i<n;i++)
    {
        if(x!=0) {cout<<a;
        x--;}
        if(x==0) {cout<<"it"; break;}
        else {cout<<"that ";
        x--;
        cout<<b;
        if(x!=0) cout<<"that ";}

    }
}
