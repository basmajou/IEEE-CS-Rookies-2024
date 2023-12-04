#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int size, e = 0, min = 0, max = 0;
    cin >> size;
    long long c[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> c[i];
        if (c[i] < c[min])
            min = i;
        if (c[i] > c[max])
            max = i;
    }
    swap(c[min], c[max]);
    for (int i = 0; i < size; ++i)
        cout << c[i] << " ";
    return 0;
}