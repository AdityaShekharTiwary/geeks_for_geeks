#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string a;
	int i,E,W,N,S;
	int aa,bb,cc,dd;
	cin>>t;
	while(t--)
	{
	cin>>a;
	E=0;aa=0;
	W=0;bb=0;
	N=0;cc=0;
	S=0;dd=0;
	for(i=0 ; i<a.size(); i++)
	{
		if(a[i]=='E')
		E++;
		if(a[i]=='W')
		W++;
		if(a[i]=='N')
		N++;
		if(a[i]=='S')
		S++;
	}

		if(N>S)
		{
		aa=N-S;
		}
		else
		{
			bb=S-N;
		}

		if(E>W)
		{
			cc=E-W;
		}
		else
		{
			dd=W-E;
		}

		for(i=0 ; i<cc ; i++)
		cout<<("E");
		for(i=0 ; i<aa ; i++)
		cout<<("N");
		for(i=0 ; i<bb ; i++)
		cout<<("S");
		for(i=0 ; i<dd ; i++)
		cout<<("W");
		cout<<("\n");
	}


}
