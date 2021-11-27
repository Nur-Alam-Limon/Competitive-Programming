#include<bits/stdc++.h>

using namespace std;

int arr[1005],ar[300];

int main()
{
    string a;
    int l, flg=0;
    while(getline(cin,a))
    {
        if(flg) printf("\n");
        flg++;

        for(int m=0; m<300; m++)
        {
            ar[m]=0;
        }
        l=0;
        l=a.size();
        for(int j=0; j<l; j++)
        {
            ar[a[j]]++;
        }
        for(int k=1; k<=1000; k++)
        {
            for(int i=150; i>=32; i--)
            {
                if(ar[i]==k)
                {
                    printf("%d %d\n", i, k);
                }
            }
        }
    }
}
