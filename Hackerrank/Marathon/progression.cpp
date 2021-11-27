#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     int arr[3];
     for(int j=0;j<3;j++)
     cin>>arr[j];
     if((arr[1]-arr[0]) == (arr[2]-arr[1]) && (arr[1]/arr[0]) == (arr[2]/arr[1]))
        cout<<"Case "<<i+1<<": Both"<<endl;
     else if((arr[1]-arr[0]) == (arr[2]-arr[1]))
        cout<<"Case "<<i+1<<": Arithmetic Progression"<<endl;
     else if((arr[1]/arr[0])*arr[1] == arr[2])
        cout<<"Case "<<i+1<<": Geometric Progression"<<endl;
     else
        cout<<"Case "<<i+1<<": None"<<endl;
    }
    return 0;
}
