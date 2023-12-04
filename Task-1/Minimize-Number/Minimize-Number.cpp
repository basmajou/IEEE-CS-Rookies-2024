#include <iostream>
using namespace std;
int main() {
    int size, operation = 0;
    bool flag = 1;
    cin >> size;
    long long b[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> b[i];
        if (b[i] % 2 == 1)
            flag = 0;
    }

    while (flag != 0)
    {
        operation++;
        for (int i = 0; i < size; ++i)
        {
            b[i] /= 2;
            if (b[i] % 2 == 1)
                flag = 0;
        }
    }
    cout << operation;

    return 0;
}