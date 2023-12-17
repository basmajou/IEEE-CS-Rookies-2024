#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int a)
{
    if (a < 2)
        return a;
    return (Fibonacci(a - 1) + Fibonacci(a - 2));
}
int main() {
    int a;
    cin >> a;
    if (a == 0)
        cout << "0";
    else
        cout << Fibonacci(a - 1);
    return 0;
}