#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,c=0,d=0;
        cin>>a;
        long long int ar[a+5];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
            if(ar[i]==1) c++;
        }
        if(c==0) {cout<<"First"<<endl; continue;}
        if(c==a && c%2!=0) {cout<<"First"<<endl; continue;}
        if(c==a && c%2==0) {cout<<"Second"<<endl; continue;}
        if(ar[0]>1) {cout<<"First"<<endl; continue;}
        for(int j=0;j<a;j++)
        {
            if(ar[j]==1) d++;
            else break;

        }
        if(d%2==0) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}

