#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     int N;
     cin>>N;
     if(N>=80)
        cout<<"Case "<<i+1<<": A+"<<endl;
     else if(N>=75)
        cout<<"Case "<<i+1<<": A"<<endl;
        else if(N>=70)
        cout<<"Case "<<i+1<<": A-"<<endl;
        else if(N>=65)
        cout<<"Case "<<i+1<<": B+"<<endl;
        else if(N>=60)
        cout<<"Case "<<i+1<<": B"<<endl;
        else if(N>=55)
        cout<<"Case "<<i+1<<": B-"<<endl;
        else if(N>=50)
        cout<<"Case "<<i+1<<": C"<<endl;
        else if(N>=45)
        cout<<"Case "<<i+1<<": D"<<endl;
        else if(N<45)
        cout<<"Case "<<i+1<<": F"<<endl;
    }
    return 0;
}

