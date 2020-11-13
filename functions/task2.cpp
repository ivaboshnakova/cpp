#include <iostream>
using namespace std;
 bool isEven (const int num) { 
 	return !(num%2);
 }
 int main (){
 	int num;
 	cin>>num;
 	cout << isEven(num);
 	return 0;
 }
