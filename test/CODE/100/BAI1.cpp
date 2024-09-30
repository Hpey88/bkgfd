#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream inp ("BAI1.INP.txt");
	ofstream out ("BAI1.OUT.txt");
	
	int a;
	int b;
	inp>>a;
	inp>>b;
    int	tong=a+b;
	if (tong%5==0)
	{
		out<<1;
	}
	else
	out<<0;
	inp.close();
	out.close();
	return 0;
}
