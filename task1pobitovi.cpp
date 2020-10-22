#include <iostream>
using namespace std;
int main() {
	int number;
	cin >> number;
	if (0 == number % 2) cout << "the number is even";
	else cout << "the number is odd";
	return 0;
}