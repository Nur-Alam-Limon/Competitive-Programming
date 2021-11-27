#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,n,in=1,mid=0,fi=0,s=0,z=0,p=0;
    cin>>x>>n;
    fi=x;
    mid=(in+fi)/2;
    s++;
    z=x;
    if(mid==n) {cout<<s<<endl; return 0;}
    while(z--)
    {
        if(mid==n) {s++; break;}
        if(mid<n)
        {
            in=mid+1;
            p=in+fi;
            mid=p/2;
            s++;
        }
        else if(mid>n)
        {
            fi=mid;
            p=in+fi;
            mid=p/2;
            s++;
        }
        //cout<<in<<endl;
        //cout<<mid<<endl;
        //cout<<fi<<endl;
    }
    cout<<s<<endl;

    return 0;

}
