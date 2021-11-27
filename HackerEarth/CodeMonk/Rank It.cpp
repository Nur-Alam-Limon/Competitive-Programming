#include<bits/stdc++.h>

using namespace std;

long long int binary(long long int low,long long int high,long long int y)
{
	while(low<=high)
	{
		long long int mid=0;
		mid=(low+high)/2;
		if(mid<y) {low=low+1;}
		else if(mid>y) {high=high-1;}
		else return mid;
	}
	return -1;
}

int main()
{
	long long int n,q;
	cin>>n;
	long long int a[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>q;
	while(q--)
	{
		long long int x,m;
		cin>>x;
		m=binary(a[0],a[n-1],x);
		cout<<m<<endl;
	}
	return 0;
}
