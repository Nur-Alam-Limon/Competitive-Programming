#include<bits/stdc++.h>

using namespace std;

long long double f(long long double x)
{
	return 2*x*x-12*x+7;
}

long long double ternary(double l,double r)
{
	for(int i=0;i<200;i++)
	{
		double m1=l+(r-l)/3;
		double m2=r-(r-l)/3;
		if(f(m1)<f(m2)) {r=m2;}
		else {l=m1;}
	}
	 return f(l);
}

int main()
{
	long long int a;
	cin>>a;
	while(a--)
	{
		double b,c,d=0;
		cin>>b>>c;
		d=ternary(b,c);
		cout<<d<<endl;
	}
	return 0;
}
