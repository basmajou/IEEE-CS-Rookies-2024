#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
{
	while (b != 0)
	{
		long long temp = a;
		a = b;
		b = temp % a;
	}
	return a;
}
int main() {
	long long a, b;
	cin >> a >> b;
	
	//GCD
	cout << GCD(a,b)<<" ";

	//LCM
	cout << (a / GCD(a, b) * b);
}
