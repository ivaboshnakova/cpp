#include <iostream>
 using namespace std;
 int main (){
 	
 	int grades_number = 0, arr_size = 50;
 	double sum = 0, average = 0;
 	double grade[];
 	
 	cout << "number of grades" << " ";
 	cin >> grades_number; 	
 	cout << "enter the grade"<< " "<< "\n";
 	
 	for(int i = 0; i < grades_number; i++ ) 
	{ 
 		cin >> grade[i];
 	    sum += grade[i];
	}
	average = sum / grades_number;
	cout<< "average=" << " " << average;
	 
 	return 0;
 }
