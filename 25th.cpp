#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
	if(n < 2) 	return false;
	if(n == 2) 	return true;
	if(n % 2 == 0) return false;
	for(int i = 3; i*i <= n; i++)
		if(n % i == 0)
			return false;
	return true;
}

int main() {
	int T, n;
	cin >> T;
	while(T-- > 0){
		cin >> n;
		if(isPrime(n))
			cout << "Prime\n";
		else
			cout << "Not prime\n";
	}
	return 0;
}

