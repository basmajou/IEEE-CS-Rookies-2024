#include <bits/stdc++.h>
using namespace std;
int c;
double d[100];
double Average(int a, double b)
{
    if (a == c)
        return b / c;
    return Average(a + 1, b + d[a]);
}
int main() {
    cin >> c;
    if (c == 0)
    {
        cout << "0";
        return 0;
    }
    for (int i = 0; i < c; ++i)
        cin >> d[i];
    cout << fixed << setprecision(6) << Average(0, 0);
    return 0;
}