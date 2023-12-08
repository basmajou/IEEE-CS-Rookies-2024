#include <bits/stdc++.h>
using namespace std;
void input(long long a[], int b)
{
    for (int i = 0; i < b; ++i)
        cin >> a[i];
}
void output(long long a[], int b)
{
    for (int i = 0; i < b; ++i)
        cout << a[i] << " ";
}
void Concat(int a)
{
    long long b[a], c[a];
    input(b, a);
    input(c, a);
    output(c, a);
    output(b, a);
}
int main() {
    int a;
    cin >> a;
    Concat(a);
    return 0;
}