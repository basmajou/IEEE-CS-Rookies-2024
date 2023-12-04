#include <bits/stdc++.h>
using namespace std;
int main() {
    long long test_cases, size, min;
    cin >> test_cases;
    while (test_cases--)
    {
        cin >> size;
        long long numbers[size];

        for (int i = 0; i < size; ++i)
            cin >> numbers[i];

        min = numbers[0] + numbers[1] + 1;
        for (int i = 1; i <= size; ++i)
        {
            for (int j = i + 1; j <= size; ++j)
                if ((numbers[i - 1] + numbers[j - 1] + (j - i)) < min)
                    min = numbers[i - 1] + numbers[j - 1] + (j - i);
        }
        cout << min << "\n";
    }
    return 0;
}