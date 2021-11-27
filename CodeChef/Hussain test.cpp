#include <bits/stdc++.h>

using namespace std ;



#define DEBUG(x) cout << '>' << #x << ':' << x << endl;

#define mem(x,val) memset((x),(val),sizeof(x))

#define all(x) x.begin(),x.end()

#define pb push_back

#define mp make_pair

#define PI acos(-1.0)

#define MAXN 1111111



const int INF = 1 << 29 ;

typedef long long ll ;

typedef pair < int , int > pii ;



ll arr[MAXN] ;



int main() {

    int n , m ,count = 1 , temp ;

    ll ans ;

    scanf("%d %d" , &n , &m) ;

    for(int i = 0 ;i<n ;i++) scanf("%lld" , arr+i) ;



    queue < ll > q1 , q2 ;

    sort(arr , arr+n) ;

    for(int i =n-1; i>=0 ;i--) q1.push(arr[i]) ;



    while(m--) {

        scanf("%d" , &temp) ;

        for(;count<=temp ; count++) {

            if(q1.front()>=q2.front()) ans = q1.front() , q1.pop() ;

            else ans =q2.front() , q2.pop() ;

            q2.push(ans>>1) ;

        }

        printf("%lld\n" , ans);

    }

    return 0 ;

}

