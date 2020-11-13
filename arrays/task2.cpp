#include <iostream>
 using namespace std;
 int main (){
 	int element_number, counter = 0;
 	double sum = 0;
 	double element[element_number];
 	do{
 		cin >> element_number;
	} while(element_number > 24);

 	for(int i = 0; i < element_number; i++ ) 
	{ 
 		cin >> element[i];
 			if (element [i] >= 0){
 				sum += element [i];
			}
			else{
				counter++;
			}	    
	}
	cout << sum << " " << counter;

 	return 0;
 }
