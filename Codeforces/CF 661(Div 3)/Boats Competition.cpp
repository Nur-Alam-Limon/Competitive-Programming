#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,j=0,k=0,x=0,y=0;
        cin>>n;
        long long int ar[n+5];
        for(int i=0;i<n;i++) {cin>>ar[i];}
        sort(ar,ar+n);
        for(int i=1;i<=100;i++)
        {
            j=0;
            k=n-1;
            x=0;
            while(j<k)
            {
                if((ar[j]+ar[k])>i) k--;
                else if((ar[j]+ar[k])<i) j++;
                else if((ar[j]+ar[k])==i) {x++; k--; j++;}
            }
            if(x>y) {y=x;}
        }
        cout<<y<<endl;
    }
    return 0;
}


