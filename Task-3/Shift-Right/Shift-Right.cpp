#include <iostream>
using namespace std;
void shift_right(int size, int shift, int a[])
{
    for (int i = size - shift; i < size; ++i)
        cout << a[i] << " ";
    for (int i = 0; i < size - shift; ++i)
        cout << a[i] << " ";
}
int main() {
    int size, shift;
    cin >> size >> shift;
    int a[size];
    for (int i = 0; i < size; ++i)
        cin >> a[i];
    shift %= size;
    shift_right(size, shift, a);
    return 0;
}