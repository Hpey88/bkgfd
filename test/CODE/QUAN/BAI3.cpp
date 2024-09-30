#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream inp("BAI3.INP.txt");
	ofstream out("BAI3.OUT.txt");
	
	int a[100];
	int n;
	
	inp>>n;
	if(n<=2 || n>=100)
	{
		out<<"sai";
	}
	
	for(int i=0;i<n;i++)
	{
		inp>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		sort(a, a + n);
		out<<a[i]<<" ";
	}
	
	return 0;
}
