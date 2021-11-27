#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c=0,d=0,e=0;
    cin>>a>>b;
    long long int ar[a+5],br[b+5];
    for(int i=0;i<a;i++) {cin>>ar[i];}
    for(int j=0;j<b;j++) {cin>>br[j];}
    c=*max_element(ar,ar+a);
    e=*min_element(ar,ar+a);
    d=*min_element(br,br+b);
    if(e*2>=d) cout<<-1<<endl;
    else if(e*2<=c && c<d) cout<<c<<endl;
    else if(e*2<=c && c>=d) cout<<-1<<endl;
    else cout<<e*2<<endl;
    return 0;
}
