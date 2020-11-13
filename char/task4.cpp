#include <iostream>
using namespace std;
int main() {
	char input;
	const int beg = 65, end = 90;
	cin >> input;
	int distance = (input <= 'N' ? input - beg : end - input);
	char output = (input <= 'N' ? end - distance : distance + beg);
	std::cout << output;
	return 0;


}
