    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;

    int main()
    {
        ll n,a=0,b=0,c=0,x,y=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            if(x==1) a++;
            if(x==2) b++;
            else c++;
        }
        y=max(a,max(b,c));
        cout<<n-y+1<<endl;
        return 0;
    }
