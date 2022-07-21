//write a program to find sum and product of a given number 
//Ex. n = 234 
//product 2*3*4 => 24
//sum  2+3+4 => 9
//ans 24-9 => 15
#include<bits/stdc++.h>
using namespace std;

void sol() {
	int n; //Initializing int n;
	cin >> n; //Taking input from user
	int prod = 1; 
	int sum = 0;
	while (n != 0) { //Here we are running loop till n is not equal to 0;
		int rem = n % 10; //finding the remainder. ex. 234%10 --> 4 will come.
		prod = prod * rem; // then prod = 1*4 => 4
		sum = sum + rem; // sum = 0+4 => 4
		n = n / 10; // 234/10 --> 23. This is the result for the first iteration. It will continue till it becomes 0.
	}

	int ans = prod - sum;
	cout << ans;
}

int main() {
	sol();
}