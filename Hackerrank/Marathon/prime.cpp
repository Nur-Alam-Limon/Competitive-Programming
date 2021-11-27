#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,j;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        long long int N,c=0;
        cin>>N;
        for(int k=2;k<N;k++)
        {
        if(N%k==0)
            c++;}
            if(c==0)
                cout<<N<<" is a prime"<<endl;
            else cout<<N<<" is not a prime"<<endl;
    }
    return 0;
}


