#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b;
    cin>>a;
    long long int ar[a+5];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    cin>>b;
    sort(ar,ar+a);
    while(b--)
    {
        long long int d,e=0;
        cin>>d;
        e=upper_bound(ar,ar+a,d)-ar;
        cout<<e<<endl;
    }
}
