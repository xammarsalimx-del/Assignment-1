#include <iostream>
using namespace std ;
int main () 
{
	int user_num,num1,num2,num3,num4, num_helper;
	cout << "Enter the number : "<< endl;
	cin >> user_num;
	while (user_num > 9999 or user_num <1000) {
		cout << "Please enter the number include 4 digits only "<< endl;
		cin >> user_num;
	}
	num1 = user_num % 10;
	num_helper = num1;
	num2 = (user_num - num_helper) % 100;
	num_helper =+num2 ;
	num2= num2 /10 ;
	num3 = (user_num - num_helper )%1000;
	num_helper=+num3;
	num3 =num3 /100;
	num4 = (user_num - num_helper)/1000;
	cout << num1 << num2 << num3<< num4 << "\nDigit sum : "<<num1+ num2 +num3 +num4 << endl;
	return 0;
}