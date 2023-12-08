#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int maximum_number(int a[], int size) {
    int max = a[0];
    for (int i = 0; i < size; ++i)
        if (max < a[i])
            max = a[i];
    return max;
}
int minimum_number(int a[], int size) {
    int min = a[0];
    for (int i = 0; i < size; ++i)
        if (min > a[i])
            min = a[i];
    return min;
}
bool prime_number(int a) {
    if (a == 1)
        return 0;
    for (int i = 2; i < a; ++i)
        if (a % i == 0)
            return 0;
    return 1;
}
bool palindrome_number(int a) {
    string temp1 = to_string(a), reversed = "";
    for (int i = temp1.length() - 1; i >= 0; i--) {
        reversed += temp1[i];
    }
    //string temp2=strrev(temp1);
    //reverse(temp1.begin(), temp1.end());
    return temp1 == reversed;
}
int maximum_number_divisors(int a) {
    int counter = 0;
    for (int i = 1; i <= a; ++i)
    {
        if (a % i == 0)
            ++counter;
    }
    return counter;
}
int main() {
    int size, prime = 0, palindrome = 0;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; ++i)
        cin >> a[i];
    cout << "The maximum number : " << maximum_number(a, size);
    cout << "\nThe minimum number : " << minimum_number(a, size);
    for (int i = 0; i < size; ++i)
    {
        if (prime_number(a[i]))
            ++prime;
    }
    cout << "\nThe number of prime numbers : " << prime;
    for (int i = 0; i < size; ++i)
    {
        if (palindrome_number(a[i]))
            ++palindrome;
    }
    cout << "\nThe number of palindrome numbers : " << palindrome;
    int max_div = a[0], num_div = maximum_number_divisors(a[0]);
    for (int i = 1; i < size; ++i)
    {
        if (num_div < maximum_number_divisors(a[i]))
        {
            num_div = maximum_number_divisors(a[i]);
            max_div = a[i];
        }
        else if (num_div == maximum_number_divisors(a[i]))
        {
            if (a[i] > max_div)
                max_div = a[i];
        }
    }

    cout << "\nThe number that has the maximum number of divisors : " << max_div;
    return 0;
}