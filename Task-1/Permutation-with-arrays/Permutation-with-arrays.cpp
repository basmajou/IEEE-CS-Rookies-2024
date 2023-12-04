#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    long long c[a], d[a];
    for (int i = 0; i < a; ++i)
        cin >> c[i];
    for (int i = 0; i < a; ++i)
        cin >> d[i];

    sort(c, c + a);
    sort(d, d + a);

    for (int i = 0; i < a; i++)
        if (c[i] != d[i])
        {
            cout << "no";
            return 0;
        }
    cout << "yes";
    return 0;
}