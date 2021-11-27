#include <bits/stdc++.h>

using namespace std;

int main()
{
        int N;
        cin>>N;
        int arr[N],ar[N-1];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<N-1;j++)
        {
            ar[j]=abs(arr[j]-arr[j+1]);
        }
    return 0;
}
