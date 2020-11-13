#include <iostream>
using namespace std;
 int min(const int a, const int b) { 
 	return a < b ? a : b;
 }
 int main (){
 	int num1, num2;
 	cin>>num1;
 	cin>>num2;
 	cout << min(num1,num2);
 	return 0;
 }
