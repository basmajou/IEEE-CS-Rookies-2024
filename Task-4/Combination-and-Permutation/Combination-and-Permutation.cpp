#include<bits/stdc++.h>
using namespace std;
long long fact(long long num) {
	long long result = 1;
	while (num) {
		result *= num;
		num--;
	}
	return result;
}
int main() {
	long long a, b;
	cin >> a >> b;

	//NCR 
	cout << fact(a) / (fact(a - b) * fact(b)) << " ";
	//NPR 
	cout << fact(a) / (fact(a - b));
	return 0;
}