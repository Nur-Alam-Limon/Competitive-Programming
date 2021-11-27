#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,y=1,x;
        cin>>n;
        long long int a[1001],b[1001];
        for(int i=0;i<n*2;i++)
        {
            x=0;
            cin>>a[i];
            if(i==0) {b[0]=a[i]; continue;}
            else
            {
                for(int j=i;j>0;j--)
                {
                    if(a[i]==a[j-1]) x++;
                }
                if(x==0) {b[y]=a[i]; y++;}
            }
        }
        for(int k=0;k<y;k++)
        {
            cout<<b[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
