//write a program to find prime numbers using sieve of eratosthenes
#include<bits/stdc++.h>
using namespace std;

void sol(int n) {
	vector<int> prime(n);

	for (int i = 2; i < n; i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				prime[j] = 1;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (prime[i] == 0) {
			cout << i << " ";
		}
	}
	cout << "\n";
}

int main() {
	int n;
	cin >> n;

	sol(n);
}