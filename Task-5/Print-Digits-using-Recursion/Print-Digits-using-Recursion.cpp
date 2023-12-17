#include <bits/stdc++.h>
using namespace std;
void PrintDigits(int a)
{
    if (a == 0)
        return;
    string b[a];
    for (int i = 0; i < a; ++i)
        cin >> b[i];
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b[i].length(); ++j)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    int a;
    cin >> a;
    PrintDigits(a);
    return 0;
}