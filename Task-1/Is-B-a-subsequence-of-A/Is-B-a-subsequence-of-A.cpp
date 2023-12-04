#include <iostream>
using namespace std;
int main() {
    int a, b, e = 0;
    cin >> a >> b;
    if (a < b)
    {
        cout << "NO";
        return 0;
    }
    long long c[a], d[b];
    for (int i = 0; i < a; ++i)
        cin >> c[i];
    for (int i = 0; i < b; ++i)
        cin >> d[i];
    for (int i = 0; i < a & e < b; ++i)
    {
        if (c[i] == d[e])
            ++e;
    }
    //cout<<e;
    if ((b == e))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}