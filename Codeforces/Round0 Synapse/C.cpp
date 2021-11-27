#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define MAX 3000005

unordered_map<ll,ll> vs;
bool v[MAX];
int len, sp[MAX];

void sieve()
{
    for(ll i = 2; i < MAX; i += 2) sp[i] = 2;
    for(ll i = 3; i < MAX; i += 2)
    {
        if(!v[i])
        {
            sp[i] = i;
            for(ll j = i; (j*i) < MAX; j += 2)
            {
                if(!v[j*i]) v[j*i] = 1, sp[j*i] = i;
            }
        }
    }
}

int main()
{
//    ios_base::sync_with_stdio(NULL);
//    cin.tie(NULL);
//    cout.tie(NULL);

    //sieve();
    sp[1]=1;

    ll t;
    scanf("%lld",&t);

    while(t--)
    {
        ll n;
        scanf("%lld",&n);

        ll c=0;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i == 0)
            {
                while(n%i == 0)
                    n/=i;

                c++;
            }
        }

        if(n!=1) c++;

        printf("%lld\n",c+1);
        vs.clear();
    }

    return 0;
}

