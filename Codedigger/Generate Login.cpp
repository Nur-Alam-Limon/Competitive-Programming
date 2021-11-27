#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]<b[0]) cout<<a[i];
        else {cout<<b[0]<<endl; return 0;}
    }
    cout<<b[0]<<endl;
    return 0;
}
