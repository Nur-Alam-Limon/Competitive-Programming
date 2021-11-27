    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        long long int t,n;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            long long int a=0,b=0,c=0;
            cin>>n;
            for(int j=2;j<=sqrt(n);j++)
            {
                if(n%j==0 && a==0) {a++; cout<<n/j<<" "<<n-(n/j)<<endl;}
                if(a==1) break;
            }
            if(a==0) cout<<n-1<<" "<<1<<endl;
        }
        return 0;
    }
