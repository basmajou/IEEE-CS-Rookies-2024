#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, f = 0;
    cin >> a >> b;
    int size = a + b + 1;
    char test[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> test[i];
        if ((test[i]) < 48 || test[i] > 57)
            ++f;
    }
    if (test[a] == '-' && f < 2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}