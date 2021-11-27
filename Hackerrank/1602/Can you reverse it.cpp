#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,j;
    cin>>T;
    for(j=0;j<T;j++)
    {
        int N=0,i=0,k,l=0,m,x;
        cin>>N>>i;
        int arr[N],arr1[N];
        x=N;
        for(k=0;k<N;k++)
        {
            cin>>arr[k];
            arr1[x]=arr[k];
            x--;
       }

    cout<<"Case "<<j+1<<":"<<endl;
    for(m=1;m<=N;m++)
    {cout<<arr1[m]<<" ";}
    printf("\n");
    cout<<arr1[i+1]<<" "<<arr[i]<<endl;
    }
    return 0;
}
