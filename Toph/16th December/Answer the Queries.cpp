#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int N,Q,L,R,cnt=0,m=0;
        scanf("%lld %lld",&N,&Q);
        long long int A[N];
        for(int j=0;j<N;j++)
        {
            scanf("%lld",&A[j]);
        }
        printf("Case %d:\n",i+1);
        for(int k=0;k<Q;k++)
        {
            scanf("%lld %lld",&L,&R);
            m=0;
            m=A[L];
            for(int p=L+1;p<=R;p++)
            {
                if(m<A[p])
                m=A[p];
            }
            cnt=0;
            for(int q=L;q<=R;q++)
            {
                if(A[q]==m) cnt++;
            }
            printf("%lld\n",cnt);
        }
    }
    return 0;
}
