#include <bits/stdc++.h>
using namespace std;

bool kiem_tra(int n) 
{
	if (n==2)
	{
		return true;
	}
	else
	{
		if (n<2)
		{
			return false;;
		}
		else
		{
			if (n%2==0)
			{
				return false;
			}
				else
				{
					for (int i=0; i<n; i++)
					{
						if (n%i==0)
						{
							return false;
						}
					}
				}
			}
		}
	
	return true;
}
   
int main() {
    int n;
    int c[100000];
    ifstream inp("BAI4.INP.txt");
    ofstream out("BAI4.OUT.txt");
    
    inp >> n;
    for (int i = 0; i < n; i++) {
        inp >> c[i]; 
    }
    
    int tong = 0; 
    bool TimSo = false; 
    
    for (int i = 0; i < n; i++) {
        if (kiem_tra(c[i])) {
            tong += c[i]; 
            TimSo = true; 
        }
    }
    
    if (TimSo) {
        out << tong; 
    } else {
        out << -1; 
    }

    return 0;
}

