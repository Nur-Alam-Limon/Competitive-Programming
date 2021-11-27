#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        cin>>a;
        long long int b[a+5];
        char x[100];
        for(int i=0;i<a;i++)
        {
            cin>>b[i];
        }
        for(int j=0;j<60;j++)
        {
            x[j]='a';
            cout<<x[j];
        }
        cout<<endl;
        for(int k=0;k<a;k++)
        {
            if(x[b[k]]<'z') {x[b[k]]+=1;}
            else {x[b[k]]=x[b[k]]-1;}
            for(int l=0;l<60;l++)
            {
                cout<<x[l];
            }
            cout<<endl;
        }
    }
    return 0;
}
