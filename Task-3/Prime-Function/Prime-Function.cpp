#include <bits/stdc++.h>
using namespace std;
bool prime(long long a)
{
    long long c = sqrt(a);
    for (int i = 2; i <= c; ++i)
        if (a % i == 0)
            return false;
    return true;
}
int main() {
    int a;
    long long b;
    cin >> a;
    for (; a > 0; --a)
    {
        cin >> b;
        if (b == 1)
        {
            cout << "NO\n";
            continue;
        }
        prime(b) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}