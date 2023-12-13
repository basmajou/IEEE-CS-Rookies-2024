#include <bits/stdc++.h>
using namespace std;
int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4, mid1, mid2, mid3, mid4, dd, r1, r2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    mid1 = (x1 + x2) / 2;
    mid2 = (y1 + y2) / 2;
    mid3 = (x3 + x4) / 2;
    mid4 = (y3 + y4) / 2;
    r1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;
    r2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2;
    dd = sqrt(pow((mid1 - mid3), 2) + pow(mid2 - mid4, 2));
    if ((r1 + r2) >= dd)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
//d = √((x2 - x1)^2 + (y2 - y1)^2)