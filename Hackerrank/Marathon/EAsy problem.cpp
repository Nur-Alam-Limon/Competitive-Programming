#include <bits/stdc++.h>

using namespace std;

int main()
{
        int N,co=0;
        cin>>N;
        int ar[N];
        for(int i=0;i<N;i++)
        {
            cin>>ar[i];
        }
        for(int k=0;k<N;k++)
        {
            if(ar[k]==1)
                co++;
        }
        if(co!=0)
            cout<<"HARD"<<endl;
        else cout<<"EASY"<<endl;

    return 0;
}
