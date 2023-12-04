#include <bits/stdc++.h>
using namespace std;
int main() {
    string test;
    int test_cases;
    cin>>test_cases;
    int c[test_cases] = { 0 };
    for (int i=0; i<test_cases; ++i)
    {
        cin >> test;
        for (int j=0; j<test.length()-2; ++j)
        {
            if ((test[j] == '0' & test[j + 1] == '1' & test[j + 2] == '0') ||
                (test[j] == '1' & test[j + 1] == '0' & test[j + 2] == '1'))
            {
                c[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < test_cases; ++i)
        if (c[i] == 1)
            cout<<"Good\n";
        else
            cout<<"Bad\n";
    return 0;
}