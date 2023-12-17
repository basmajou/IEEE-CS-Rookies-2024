#include <iostream>
using namespace std;
void Try(int a, int b)
{
    if (a > b)
        return;
    cout << a << "\n";
    Try((a + 1), b);
}
int main() {
    int a;
    cin >> a;
    Try(1, a);
    return 0;
}