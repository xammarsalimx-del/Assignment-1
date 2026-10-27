#include <iostream>
using namespace std ;
int main()
{
	int temp;
	cout << "Enter the temperature in Celsius : " << endl;
	cin >> temp ;
	if (temp < 15)
		cout << "Cold" << endl;
	else if (temp < 30 )
		cout << "Warm" << endl;
	else 
		cout << "Hot" << endl;
	return 0;
}