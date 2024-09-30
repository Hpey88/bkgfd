#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int c[100000];
	ifstream inp("BAI3.INP.txt");
	ofstream out("BAI3.OUT.txt");
	inp>>n;
	for (int i=0; i<n; i++)
	inp>>c[i];
	
    sort (c,c+n);
     for (int i=0; i<n; i++)
    out<<c[i]<<" ";
    return 0;
}
