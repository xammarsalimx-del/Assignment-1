#include <iostream>
using namespace std;
int main()
{
	int age ;
	cout << "Enter your age : ";
	cin >> age ;
	if (age >= 18)
		cout << "You are Adult" << endl ;
	else 
		cout << "You are Minor" << endl ;
	return 0;
}