#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int ab,bc,ca,a=0,b=0,c=0;
    cin>>ab>>bc>>ca;
    a=sqrt((ab*ca)/bc);
    b=sqrt((ab*bc)/ca);
    c=sqrt((bc*ca)/ab);
    cout<<4*(a+b+c)<<endl;
    return 0;
}
