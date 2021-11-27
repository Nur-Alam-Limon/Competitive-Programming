    #include<bits/stdc++.h>

    using namespace std;

    typedef long long ll;

    int main()
    {
        freopen("input.txt","rt",stdin);
        freopen("output.txt","wt",stdout);

        ll n,z=0,x;
        scanf("%lld",&n);
        n=n*2;
        vector<ll>b[5002];
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&x);
            b[x].push_back(i+1);
        }
        for(ll i=1;i<=5000;i++)
        {
            if(b[i].size()%2) {z=1; break;}
        }
        if(z) {printf("-1\n"); return 0;}
        for(ll i=1;i<=5000;i++)
        {
            for(ll j=0;j<b[i].size();j+=2)
            {
                printf("%lld %lld\n",b[i][j],b[i][j+1]);
            }
        }
        printf("\n");
        return 0;
    }
