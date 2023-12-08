#include <bits/stdc++.h>
using namespace std;
void swaping(int a, int b, int c)
{
    --b;
    --c;
    int d[a][a];
    for (int i = 0; i < a; ++i)
        for (int j = 0; j < a; ++j)
            cin >> d[i][j];

    for (int i = 0; i < a; ++i)
    {
        swap(d[b][i], d[c][i]);
    }
    for (int i = 0; i < a; ++i)
    {
        swap(d[i][b], d[i][c]);
    }

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
            cout << d[i][j] << " ";
        cout << "\n";
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    swaping(a, b, c);
    return 0;
}