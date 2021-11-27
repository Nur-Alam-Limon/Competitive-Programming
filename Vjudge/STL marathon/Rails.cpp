#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,x=1;
    while(cin>>a)
    {
        if(a==0) break;
        int b=0;
        while(b!=1)
        {
        int ar[a];
        int c=0,d=0;
        if(a==1) cout<<"Yes"<<endl;
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
            if(ar[i]==0) {b++; break;}
        }
        if(b==1) {cout<<endl; continue;}
        c=1;
        for(int j=1;j<a;j++)
        {
            if(abs(ar[j-1]-ar[j])!=c) d++;
        }
        if(d==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        }
    }
    return 0;
}
