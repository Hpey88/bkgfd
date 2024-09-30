#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream inp("BAI2.INP.txt");
	ofstream out("BAI2.OUT.txt");
	
	string S;
	inp>>S;
	
	int chu=0; int so=0;
	
	for(char c : S)
	{
		if(isdigit(c)) so++;
		
		else if (isalpha(c)) chu++;
	}
	
	int tich=chu*so;
	
	out<<tich;
	
	inp.close();
	out.close();
	return 0;
}
