#include <bits/stdc++.h>
using namespace std;

bool nt(int n) {
    if(n<2)
    {
    	return false;
	}
	if(n==2)
	{
		return true;
	}
	if(n%2==0)
	{
		return false;
	}
	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

int main() {
    ifstream inp("BAI4.INP.txt");
    ofstream out("BAI4.OUT.txt");
    
    int a[1000];
    int n;

    inp >> n;
    for (int i = 0; i < n; i++) {
        inp >> a[i];
    }
    
    int tong = 0;
    bool kt = false;

    for (int i = 0; i < n; i++) {
        if (nt(a[i])==true) {
            tong += a[i];
            kt = true;
        }
    }
    
    if (kt) {
        out << tong;
    } else {
        out << -1;
    }

    inp.close();
    out.close();
    return 0;
}
