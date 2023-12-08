#include <bits/stdc++.h>
using namespace std;
void binaryrepresentation(long long a)
{
    long long m;
    string b, c;
    while (a != 0)
    {
        m = a % 2;
        a /= 2;
        if (m == 0)
            b += "0";
        else
            b += "1";
    }
    c = b;
    reverse(c.begin(), c.end());
    if (c == b)
        cout << "YES";
    else
        cout << "NO";
}
int main() {
    long long a;
    cin >> a;
    if (a % 2 == 1)
    {
        binaryrepresentation(a);
    }
    else
        cout << "NO";

    return 0;
}