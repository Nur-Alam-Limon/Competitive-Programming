#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b=0,c=0;
        cin>>a;
        long long int ar[a+5];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+a);
        for(int j=1;j<a;j++)
        {
            if(ar[j]-ar[j-1]>=b) b=ar[j]-ar[j-1];
        }
        if(b<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
