#include <bits/stdc++.h>
using namespace std;
long long c;
bool ReachValue(long long a)
{
    if (a == c)
        return true;
    else if (a > c)
        return false;
    else return (ReachValue(a * 10) || ReachValue(a * 20));
}
int main() {
    int a;
    cin >> a;
    while (a > 0)
    {
        cin >> c;
        if (ReachValue(1))
            cout << "YES\n";
        else
            cout << "NO\n";
        --a;
        c = 0;
    }
    return 0;
}