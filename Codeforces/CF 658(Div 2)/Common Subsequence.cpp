#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c=0,d=0;
        cin>>a>>b;
        long long int ar[a+5],arr[b+5];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }
        for(int j=0;j<b;j++)
        {
            cin>>arr[j];
        }
        for(int k=0;k<a;k++)
        {
            for(int l=0;l<b;l++)
            {
                if(ar[k]==arr[l])
                    {
                        if(c==0) {c=ar[k];}
                        if(c>ar[k]) {c=ar[k];}
                    }
            }
        }
        if(c==0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<c<<endl;
        }
    }
    return 0;
}
