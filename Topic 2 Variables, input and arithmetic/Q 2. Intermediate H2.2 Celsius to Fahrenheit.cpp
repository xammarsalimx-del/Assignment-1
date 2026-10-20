#include <iostream>
using namespace std ;
int main()
{
	float temp_c ;
	cout << "Enter the temperature in celsius" << endl;
	cin >> temp_c ;
	cout << temp_c << " in celsius = "<< temp_c  * 9/5 + 32 << " in Fahrenheit"<<endl;
}