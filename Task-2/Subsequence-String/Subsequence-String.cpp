#include <bits/stdc++.h>
using namespace std;
int main() {
    string word, sequence = "hello";
    cin >> word;
    int size = word.length(), j = 0;
    for (int i = 0; i < size; ++i)
    {
        if (word[i] == sequence[j])
            ++j;
    }
    if (j == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}