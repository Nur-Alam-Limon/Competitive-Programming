#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=n-2;i>=0;i=i-2)
    {
        cout<<s[i];
    }
    if(n%2==0) a=1;
    else a=0;
    for(int j=a;j<n;j+=2)
    {
        cout<<s[j];
    }
    cout<<endl;
    return 0;
}
