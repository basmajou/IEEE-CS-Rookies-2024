#include<bits/stdc++.h>
using namespace std;

long long Equation(int a, int b) {
	long long c = 0;
	for (int i = 2; i <= b; i += 2) {
		c += pow(a, i);
	}
	return c;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << Equation(a, b);
}