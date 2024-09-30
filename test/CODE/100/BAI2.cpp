#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int chu= 0;
    int  so = 0;
    ifstream inp("BAI2.INP.txt");
    ofstream out("BAI2.OUT.txt");
    inp>>s;

    for (int i=0; i<s.size(); i++)
    {
    char c=s[i];
        if (isalpha(c)) chu++;
        else if (isdigit(c)) so++;
    }
    int tich=chu*so;

    out<<tich;

    return 0;
}

