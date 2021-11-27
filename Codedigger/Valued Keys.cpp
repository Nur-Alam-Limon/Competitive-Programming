#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    long long int d=0;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<b[i]) d=1;
    }
    if(d==1) cout<<-1<<endl;
    else cout<<b<<endl;
    return 0;
}
